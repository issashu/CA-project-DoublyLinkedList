#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

/**
 * @brief The function adds an element to a doubly linked list based on supplied value for search.
 *        It pushes the found value back and adds the element in its place.
 * 
 * @param Head - double pointer to the head of the list
 * @param Tail - double pointer to the tail of the list
 */
void AddBetween(TDListNode** Head, TDListNode** Tail){
    if((*Head)==NULL){
        SetupList(&gHead, &gTail);
    }
    else{
        int KeyValue;
        KeyNode = (*Head);
        TDListNode* NewNode = (TDListNode*) malloc(sizeof(TDListNode));
        printf("What KeyValue do you need the value added after? ");
        KeyValue = ValidateEntry();
        while(KeyNode->m_nValue != KeyValue){
            if(KeyNode->m_pNextNode==NULL){
                printf("\n\nNo node contains the value %d\n\n", KeyValue);
                return;
            }
            else{
                KeyNode = KeyNode->m_pNextNode;
            }
        }
        
       if((KeyNode==(*Head) && (*Head)->m_pNextNode==NULL) || (KeyNode==(*Tail))){
            AppendEnd(&gTail);
        }
        else if(KeyNode==(*Head)){
            printf("Enter value for the next element: ");
            NewNode->m_nValue = ValidateEntry();
            NewNode->m_pNextNode = (*Head)->m_pNextNode;
            NewNode->m_pPrevNode = (*Head);
            (*Head)->m_pNextNode->m_pPrevNode = NewNode;
            (*Head)->m_pNextNode = NewNode;
            NodeCounter++;
        }
        else{
            printf("Enter value for the next element: ");
            NewNode->m_nValue = ValidateEntry();
            NewNode->m_pNextNode = KeyNode->m_pNextNode;
            NewNode->m_pPrevNode = KeyNode;
            KeyNode->m_pNextNode->m_pPrevNode = NewNode;
            KeyNode->m_pNextNode = NewNode;
            NodeCounter++;
        }
    }
}
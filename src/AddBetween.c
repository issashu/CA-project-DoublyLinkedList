#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

/**
 * @brief The function adds an element to a doubly linked list based on supplied value for search.
 *        It pushes the found value and adds the element in its place.
 * 
 * @param Head - double pointer to the head of the list
 */
void AddBetween(TDListNode* Head){
    if(Head==NULL){
        SetupList(&gHead, &gTail);
    }
    else{
        short KeyValue;
        KeyNode = Head;
        TDListNode* NewNode = (TDListNode*) malloc(sizeof(TDListNode));
        printf("What KeyValue do you need the value added after? ");
        scanf("%hd", &KeyValue);
        while(KeyNode->m_nValue != KeyValue){
            if(KeyNode->m_pNextNode==NULL){
                printf("\n\nNo node contains the value %d\n\n", KeyValue);
                return;
            }
            else{
                KeyNode = KeyNode->m_pNextNode;
            }
        }
        
        if(KeyNode==Head){
            AddBeginning(&gHead);
        }
        else{
            printf("Enter value for the next element: ");
            scanf("%d", &NewNode->m_nValue);
            NewNode->m_pNextNode = KeyNode->m_pNextNode;
            NewNode->m_pPrevNode = KeyNode;
            KeyNode->m_pNextNode = NewNode;
            KeyNode->m_pNextNode->m_pPrevNode = NewNode;
            NodeCounter++;
        }
    }
}
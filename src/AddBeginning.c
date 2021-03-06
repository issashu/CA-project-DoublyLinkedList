#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

/**
 * @brief The function adds an element to the beginning of a double linked list.
 *        
 * 
 * @param Head - double pointer to the head of the list
 */
void AddBeginning (TDListNode** Head){
    if((*Head)==NULL){
        SetupList(&gHead, &gTail);
    }
    else{
        TDListNode* NewNode = (TDListNode*) malloc(sizeof(TDListNode));
        printf("Enter value for the next element: ");
        NewNode->m_nValue = ValidateEntry();
        NewNode->m_pNextNode = *Head;
        NewNode->m_pPrevNode = NULL;
        (*Head)->m_pPrevNode = NewNode;
        *Head = NewNode;
        NodeCounter++;
    }
    
}
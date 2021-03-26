#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"


/**
 * @brief The function adds an element to the end of the list.
 * 
 * 
 * @param Tail - double pointer to the Tail of the list.
 */
void AppendEnd (TDListNode** Tail){
    if((*Tail)==NULL){
        SetupList(&gHead, &gTail);
    }
    else{
        TDListNode* NewNode = (struct TDListNode*)malloc(sizeof(TDListNode));
        printf("Enter value for the next element: ");
        NewNode->m_nValue = ValidateEntry();
        (*Tail)->m_pNextNode = NewNode;
        NewNode->m_pNextNode = NULL;
        NewNode->m_pPrevNode = (*Tail);
        (*Tail) = NewNode;
        NodeCounter++;
    }
}
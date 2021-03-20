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
    TDListNode* NewNode = (TDListNode*) malloc(sizeof(TDListNode));
    printf("Enter value for the next element: ");
    scanf("%d", &NewNode->m_nValue);
    NewNode->m_pNextNode = *Head;
    NewNode->m_pPrevNode = NULL;
    (*Head)->m_pPrevNode = NewNode;
    *Head = NewNode;
    NodeCounter++;
}
#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

/**
 * @brief Performs the initial setup of a doubly linked list (incl. head and tail)
 * 
 * @param Head - double pointer to the Head of the list
 * @param Tail - double pointer to the Tail of the list
 */
void SetupList(TDListNode** Head, TDListNode** Tail){
    gHead = (TDListNode*)malloc(sizeof(TDListNode));
    printf("Please enter a value for the first element of the list: ");
    scanf("%d", &(*Head)->m_nValue);
    (*Head)->m_pNextNode = NULL;
    (*Head)->m_pPrevNode = NULL;
    *Tail = *Head;
    NodeCounter++;
}
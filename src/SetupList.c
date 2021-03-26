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
    system("clear");
    printf("Please enter a value for the first element of the list: ");
    (*Head)->m_nValue = ValidateEntry();
    (*Head)->m_pNextNode = NULL;
    (*Head)->m_pPrevNode = NULL;
    *Tail = *Head;
    NodeCounter++;
}
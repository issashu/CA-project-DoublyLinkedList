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
    short KeyValue;
    KeyNode = Head;
    TDListNode* NewNode = (TDListNode*) malloc(sizeof(TDListNode));
    printf("Enter value for the next element: ");
    scanf("%d", &NewNode->m_nValue);
    printf("What KeyValue do you need the value added after? ");
    scanf("%hd", &KeyValue);
    while(KeyNode->m_nValue != KeyValue){
        KeyNode = KeyNode->m_pNextNode;
    }
    NewNode->m_pNextNode = KeyNode->m_pNextNode;
    NewNode->m_pPrevNode = KeyNode;
    KeyNode->m_pNextNode = NewNode;
    KeyNode->m_pNextNode->m_pPrevNode = NewNode;
}
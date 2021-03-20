#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

/**
 * @brief The function removes a node based on selected key value. Node tp be removed can be at any position in the list.
 * 
 * @param Head - double pointer to the head of the list
 * @param Tail - double pointer to the tail of the list
 */
void RemoveNode(TDListNode** Head, TDListNode** Tail){
    short KeyValue = 0;
    KeyNode = (*Head);
    TDListNode* PrevPoint=(TDListNode*)malloc(sizeof(TDListNode));
    TDListNode* NextPoint=(TDListNode*)malloc(sizeof(TDListNode));
    printf("What value do you want deleted: ");
    scanf("%hd", &KeyValue);
    //Itterates to the node just before the one to delete
    while(KeyNode->m_nValue!=KeyValue){
        if(KeyNode->m_pNextNode==NULL){
            printf("No node contains the value %d\n", KeyValue);
            return;
        }
        else{
            KeyNode = KeyNode->m_pNextNode;
        }
    }
    if (KeyNode==(*Head)){
        if((*Head)->m_pPrevNode==NULL && (*Head)->m_pNextNode==NULL){
            printf("List is empty now\n");
            free(*Head);
            free(*Tail);
            (*Head) = NULL;
            (*Tail) = NULL;
            NodeCounter = 0;
        }
        else{
            (*Head) = (*Head)->m_pNextNode;
            (*Head)->m_pPrevNode = NULL;
            free(KeyNode); 
            NodeCounter--;
        }
    }
    else if(KeyNode==(*Tail)){
        if((*Tail)->m_pPrevNode!=NULL){
            KeyNode = (*Tail);
            (*Tail) = (*Tail)->m_pPrevNode;
            (*Tail)->m_pNextNode = NULL;
            free(KeyNode); 
            NodeCounter--;
        }
    }

    else{
        NextPoint = KeyNode->m_pNextNode;
        PrevPoint = KeyNode->m_pPrevNode;
        PrevPoint->m_pNextNode = NextPoint;
        NextPoint->m_pPrevNode = PrevPoint;
        free(KeyNode);
        NodeCounter--;
    }    
}
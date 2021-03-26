#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

/**
 * @brief The function prints the main developer menu.
 * 
 * @param Selector - selector parameter, which drives the menu selections
 * @return short - returns the value of the selected menu, stored in the Selector variable
 */
short DevMenu(short Selector){
    printf("\n****DEVELOPER MENU****\n");
    printf("Your list currently contsains %hd element(s).\n", NodeCounter);
    printf("1. Add element at the begining of the list.\n2. Add element after another element.\n");
    printf("3. Add element at the end of the list\n4.Delete an element\n5.Print the list.\n6.Quit program.\nInput: ");
    selection:
    Selector = ValidateEntry();
    if (Selector<1 || Selector>6){
        printf("Incorrect selection, please select a number between 1 and 6!");
        goto selection;
    }
    return Selector;
}

/**
 * @brief The function prints the doubly linked list
 * 
 * @param Head - pointer to the Head of the list
 */
void ListPrinter(TDListNode* Head){
    TDListNode* PrintPoint = Head;
    int i=0;
    system("clear");
    if(Head==NULL){
        printf("\n\nNothing to print!\n\n");
        return;
    }
    printf("\n\n{\n");
    printf("\tThe %d element of list is: %d;\n", i+1, PrintPoint->m_nValue);
    i++;
    while(PrintPoint->m_pNextNode!=NULL){
        PrintPoint = PrintPoint->m_pNextNode;
        printf("\tThe %d element of list is: %d;\n", i+1, PrintPoint->m_nValue);
        i++;
    }
    printf("}\n\n");
}
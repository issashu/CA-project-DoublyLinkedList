#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

short NodeCounter;

TDListNode* gHead=NULL;
TDListNode* gTail=NULL;
TDListNode* KeyNode=NULL;

int main(){
    NodeCounter = 0;
    short Selection = 0;
    SetupList(&gHead, &gTail);
        while(Selection!=6){
            Selection = DevMenu(Selection);
            switch (Selection){
                case 1:
                    AddBeginning(&gHead);
                break;

                case 2:
                    AddBetween(&gHead, &gTail);
                break;

                case 3:
                    AppendEnd(&gTail);
                break;

                case 4:
                    RemoveNode(&gHead, &gTail);
                break;

                case 5:
                    ListPrinter(gHead);
                break;

                case 6:
                    system("clear");
                    printf("Have a nice day! See you soon!\n");
                break;
            }
        }
    return 0;
}
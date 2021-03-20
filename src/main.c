#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"
//test
short NodeCounter = 0;

TDListNode* gHead;
TDListNode* gTail;
TDListNode* KeyNode;

int main(int argc, char **argv){
    short Selection = 0;
    gHead = (TDListNode*)malloc(sizeof(TDListNode));
    SetupList(&gHead, &gTail);
    if(*(argv[1])=="-dev"){
        while(Selection!=6){
            Selection = DevMenu(Selection);
            switch (Selection){
                case 1:
                    AddBeginning(&gHead);
                break;

                case 2:
                    AddBetween(gHead);
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
                    printf("Have a nice day! See you soon!\n");
                break;
            }
        }
    }
    else{
        printf("Game not implemented yet.");
    }
    return 0;
}
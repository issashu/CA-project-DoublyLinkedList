#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

int ValidateEntry(){
    int Value =0;
    while (scanf("%d", &Value)!=1){
        printf("Please enter a numerical value. Letters and special characters are not accepted.\n");
        printf("Float numbers are trunkated to integers.\n");
        fflush(stdin);
    }
    fflush(stdin);
    return Value;
}
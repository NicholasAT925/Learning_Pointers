#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */
int getNumber();

/* Global Variables */
int number; // int variables
int *pnumber = NULL; // Declaring pointer int variables

int main(){
    number = 10;
    pnumber = &number;

    /* Using the int variable itself */
    printf("The variable 'number' has the value of = %d\n", number);
    printf("The address of number is = %p\n", &number);
    /* Referencing and using the pointer */ 
    printf("The pointer pnumber has the value of = %p\n", pnumber);
    printf("The pointer pnumber dereferences the value = %d\n", *pnumber);
    printf("The pointer itself has the address of = %p\n",&pnumber);
    printf("The pointer size is = %zd bytes\n", sizeof(pnumber));
    return 0;
}

int getNumber(){

}
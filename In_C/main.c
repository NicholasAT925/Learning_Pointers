#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */
int getNumber();

/* Global Variables */
int number, i; // int variables
int *pnumber = NULL; // Declaring pointer int variables
char multiple[] = "a string"; // // char string variable
char *p = multiple; // char pointer

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
    printf("The pointer size is = %zd bytes\n\n", sizeof(pnumber));
    /* Pointer Arithmatics and how arrays and poiter are kinda the same */
    for (i = 0; i < strlen(multiple); ++i){
        printf("multiple[%d] = %c | *(p+%d)= %c | &multiple[%d] = %p | p+%d = %p\n", i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
    }
    return 0;
}

int getNumber(){

}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */
void copyString(char *from, char *to);

/* Global Variables */
int number, i; // int variables
int *pnumber = NULL; // Declaring pointer int variables
char multiple[] = "a string", String1[] = "A string to be copied", String2[100]; // char string variable
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
    /* Benifits of using pointer instead of arrays */
    copyString(String1, String2);
    printf("\n\nThe text in String2 = %s\n", String2);
    
    return 0;
}

void copyString(char *from, char *to){
    while ( *from){
        *to++ = *from++;
    }
    *to = '\0';
}
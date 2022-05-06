#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */
void copyString(char *from, char *to);
int countStringLen(const char *String);

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
    /* Pointer Arithematics */
    printf("\n\nThe length of the string'Hello' = %d\n", countStringLen("Hello"));
    printf("The length of the string '' = %d\n", countStringLen(""));
    printf("The length of the string 'Dragon' = %d\n", countStringLen("Dragon"));

    return 0;
}

/* Function Details */
void copyString(char *from, char *to){
    /*  
     *  This Functions demostaits how little code needs to be writen vs calling
     *  up the array through variables normally
    */
    while ( *from){ // Will return false when reaches the end of the string as there iS A '\0' AT THE END
        *to++ = *from++; // return the variable before incrementing
    }
    *to = '\0';
}
int countStringLen(const char *String){
    /* 
    *   This Function will return the length of the String Input
    *   Another Example how pointers in array make things simplyfied and easier to find and use info
    */
    const char *lastAddress = String; // pointer variable that is use to store the last address of the string
    while (*lastAddress){ // Will return false when reaches the end of the string as there iS A '\0' AT THE END
        ++lastAddress; // increment the address or pointer to the next letter until '\0'
    }
    return lastAddress - String;    // By taking the last address and minusing it witht eh last address we can find the length
                                    // As String Addresses for each letter ot element are place together in sequence 
}
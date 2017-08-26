/* Fig 2.5: fig02_05.c
 * Addition Prgoram */

#include<stdio.h>

int main(){

    int integer1; /* First number to be input by user */
    int integer2; /* Second number to be input by user */
    int sum; /* Variable in which sum will be stored */

    printf("Enter first integer: "); /* Prompt */
    scanf("%d", &integer1); /* Read an integer */
    printf("Enter second integer: "); /* Prompt */
    scanf("%d", &integer2); /* Read an integer */

    sum = integer1 + integer2;

    printf("Sum is %d\n", sum); /* Print sum */

    return 0; /* Indicate that program ended successfully */

} /* End function main */

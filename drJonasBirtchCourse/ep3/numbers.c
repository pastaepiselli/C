#include<stdio.h>

/*
C placeholders

%s a string of chars

%d integer

*/
int main(void)
{

    // gli interi occupano di default 32bit quindi tra 0 -> 4.3 milioni, se si prova ad inserire un numero maggiore la variabile overflowa
    // int = integer, number without decimal point
    int x, y, result;
    // se il tipo e lo stesso possiamo definirli sulla stessa riga separati da una virgola
    // int y;
    printf("Please input a number:\n");
    // non utilizzare \n per scanf dopo il placeholder
    scanf("%d", &x); // &?? 
    printf("Please input another number:\n");
    scanf("%d", &y);

    result = x + y;
    printf("The result is %d\n", result);
    return 0;
}

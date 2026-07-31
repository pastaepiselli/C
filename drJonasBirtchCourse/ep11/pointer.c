#include<stdio.h>
#include<string.h>
int main()
{
    char str[32];
    // * sta per pointer, un puntatore che puo puntare a qualsiasi char
    char *p;

    strncpy(str, "I like apples", 31);
    // ora p sta puntando alla str
    p = str;

    // possiamo anche dichiarare
    //p = p + 1; // ora p non puntera piu al primo carattere della stringa ma al secondo
    printf("%s\n", p);
    
    // possiamo anche accedere solo al singolo carattere a cui punta il pointer
    printf("%c\n", *p);
    return 0;
}

#include<stdio.h>
int main(void)
{
    char name[16];
    printf("Hello, what is your name?\n");
    // scanf non viene mai usata in production code perche non e safe
    scanf("%s", name); 

    // %s verra sostituito con la variabile a destra, con s si indica una stringa (array di caratteri)
    printf("Hello %s \n", name);
    return 0;
}


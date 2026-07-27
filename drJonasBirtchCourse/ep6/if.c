#include<stdio.h>
int main()
{
    /*
    int x;

    x = 4;
    
    // if (condizione) {codice da eseguire}, ovviamente in C non e necessaria l'indentazione ma e preferibile per un discorso di lettura
    if (x == 5)
        printf("It is five!\n");
    */
    
    int velocity, safespeed;

    safespeed = 80;

    printf("How fast are you driving in km/h?\n");
    scanf("%d", &velocity);

    if (velocity > 100) 
        printf("You are driving to fast\n");

    else if (velocity > safespeed)
        printf("You are driving safely\n");
    else
        printf("OK\n");
    return 0;
}

#include<stdio.h>

int main()
{
    // diversi tipi di loop
    // while
    // do
    // for
    int x;

    // dichiara sempre le variabili prima dell'utilizzo
    x = 0;
    while(x != 1){ // il corpo di questo codice viene ripetuto ogni volta che questa condizione e vera
        printf("Do you wish to quit? Press 1.\n");
        scanf("%d", &x);
    }

     return 0;
}

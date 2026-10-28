/* in matetica un ButtHeadDoubler (hanno un nome vero penso) sono numeri che se spostata la loro ultima cifra all'inizio
il valore e uguale a quello del numero iniziale moltiplicato per 2, (esempio che non e valido per capire) 25, 52 */
#include<stdio.h>

int main()
{
    int res = 2;
    int n = 0;
    int pow = 1;
    int curr;
    while (1){

        res += (res % pow++) * 2;
        if (res % pow == 2) break;
    }
    printf("The smallest ButtHeadDouble is %d\n", res);
    return 0;
}


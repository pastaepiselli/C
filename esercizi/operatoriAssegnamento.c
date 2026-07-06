#include <stdio.h>
int main ()
{
    // gli operatori di assegnamento vengono usati per assegnare valori alle variabili
    int x = 10; //  = e un operatore di assegnamento
    
    x += 5; // x = x + 5
    printf("%d\n", x);

    x -= 5; // x = x - 5
    printf("%d\n", x);

    x *= 5; // x = x * 5
    printf("%d\n", x);

    x /= 5; // x = x / 5
    printf("%d\n", x);

    x %= 5; // x = x % 5
    printf("%d\n", x);

    // ora andiamo sulla roba importante
    x = 7; // reimpostaimo variabile che stiamo andando crazy

    /* bitwise AND operator esegue un operazione di AND su 2 numeri binari con stessa lunghezza in questo caso
     * 7 = 0111
     * 2 = 0010 &
     * ________
     * r = 0010 -> vado ad eseguire un and per ogni cifra dei 2 numeri e ritorno il risultato in base 10
     */
    x &= 2;
    printf("%d\n", x);

    // biwise OR operator
    x = 10;
    x |= 5;
    printf("%d\n", x); // deve tornarmi 15 se ho capito


    return 0; 
    
}

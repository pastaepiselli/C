#include <stdio.h>
int main()
{

    // gli operatori sono utilizzati per operazioni tra variabili e valori

    // operatori aritmetici
    int x = 5;
    int y = 2;
    printf("Somma: %d\n", x + y);
    printf("Sottrazione: %d\n", x - y);
    printf("Moltiplicazione: %d\n", x * y);
    printf("Divisione: %d\n", x / y);
    printf("Modulo: %d\n", x % y);

    int z = 0;
    // incremento
    printf("%d\n", ++z);
    
    // decremento
    --z;
    printf("%d\n", z++);
    printf("%d\n", z);

    // differenzta tra z++ e ++z
    // ++z = ottiene il numero z+1 
    // z++ ottiene z poi fa + 1

    return 0;
}

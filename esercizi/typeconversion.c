#include <stdio.h>
int main()
{
    // a volte avrai bisogno di convertire tipi di dato
    int x = 5;
    int y = 2;
    float sum = x / y;

    // in questo caso ci viene ritornato 2!! 
    // bisognerebbe proprio convertire
    
    /* Ci sono 2 tipi di conversione in C:
     * - Implicita (automatica)
     * - Esplicita (manuale)
     */

    // quella implicita avviene ad esempio quando assegni ad una variabile di un tipo un altro tipo
    float myFloat = 9;
    printf("%f\n", myFloat); // 9.00000000

    // puo succedere anche al contrario ovviamente
    int myInt = 9.99;
    printf("%d\n", myInt);
    // tornando al problema della divisione possiamo salvare la divisione in un risultato appropriato
    printf("%f\n", sum); // il risultato e cmq 2.000000!!!!
    // questo perche 5 e 2 sono cmq interi, in questo caso e necessaria una conversione manuale

    sum = (float) x / y;
    printf("%f\n", sum); // ora il res e 2.5 
    return 0;
}

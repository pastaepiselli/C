#include <stdio.h>
int main(){
    // per creare una variabile serve specificare il tipo e il nome
    int myNum = 15;

    // si puo anche creare una variabile e assegnare un valore dopo
    int newNum;
    newNum = 20;
    
    // per stampare questa variabile inserirla nel printf non basta e necessario, un format specifier
    // lo si puo vedere come un placeholder per variabili
    printf("%d\n", myNum);
    
    // piu tipi di variabili
    float myFloatNum = 5.99;
    char myLetter = 'D';
    
    printf("%d\n", newNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    // si possono anche stampare variabili senza salvare
    printf("Lorenzo ha %d anni\n", 21);
    
    // se assegni un altro valore ad una variabile quella viene sovrascritta
    newNum = 10;
    printf("%d\n", newNum);
        
    // si puo anche assegnare una variabile ad un'altra
    newNum = myNum;

    // operazioni con variabili
    int sum = newNum + myNum;
    printf("Somma delle variabili: %d\n", sum);

    // si possono dichiarare piu variabili contemporanteamente
    int x = 4, y = 5, z = 10;
    printf("x: %d, y: %d, z: %d\n", x,y,z);

    // puoi anche riassegnare tutte le variabile ad un solo valoreo
    x = y = z = 50;
    printf("x: %d, y: %d, z: %d\n", x,y,z);
    return 0;

}

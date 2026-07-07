#include <stdio.h>
int main(){
    // caratteri numerici
    // per salvare numeri senza la virgola ci sono gli int (interi)
    int num = 10;
    // come format specifier si puo anche usare %i
    printf("Il mio intero: %d\n", num);


    // numeri con la virgola (floating point) abbiamo sia double che floaf
    // la differenza e che il double ha il doppio della precisione del float
    // il double occupa il doppio dello spazio e la precisione geometrica della virgola e maggiore.
    // i float, numeri con un bel virgolozzo
    float fl = 1.99;
    // come format specifier si puo usare anche %F
    printf("Il mio float: %f\n", fl);

    double db = 1.56;
    printf("Il mio double: %lf\n", db);

    // in C possiamo anche scrivere numeri scientifici come
    // la e sta per " per 10 alla potenza di ..."
    float f1 = 35e3; // 35 * 10 ^ 3 = 35000
    double d1 = 12E4; // 12 * 10 ^ 4 = 120000

    // come avere numeri precisi, dopo la virgola float ecc ...  
    printf("Il mio float con 2 cifre dopo la virgola: %.2f\n", fl);
    printf("Il mio double con 3 cifre dopo la virgola %.3f\n", db);



    // utilizzato per salvare solo un carattere
    char carattere = 'D';

    // questi caratteri hanno ovviamente un hashcode quindi puoi anche utilizzare quello
    char a = 65; // 65 in ascii rappresenta la lettere a
    printf("Il mio carattere: %c\n", carattere);

    // nel caso volessi salvare una parola puo essere salvata come un array di char
    char nome[] = "Lorenzo";
    printf("Il mio nome: %s\n", nome);

    // memory size di una variabile rispetto al tipo (in byte)

    int myInt;
    float myFloat;
    double myDouble; 
    char myChar;
    printf("%zu\n", sizeof(myInt)); // per il ritorno di sizeof si usa %zu al posto di %d. zu = unsigned size
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));
    return 0;

} 

#include <stdio.h>
int main()
{
    // con const la variabile dichiarata non puo essere cambiata
    const int myNum = 15;
    // myNum = 13; questo da errore
    // quando viene dichiarata una costante deve sempre avere associato un valore
    // non che dia errore pero poi non puo essere aggiornata quindi socio idk
    // GOODPRACTICE, le costanti vanno scritte tutte in maiuscolo
    const int BIRTHYEAR = 2005;
    const char PROVA;
    printf("%c\n", BIRTHYEAR);
    return 0;
}

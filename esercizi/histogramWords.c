#include<stdio.h>

#define MAX_LENGTH 12
int main()
{
    int c, i, j, wc;
    int wordsLength[MAX_LENGTH + 1];

    // assegno ad ogni elemento dell'array 0
    for (i = 0; i <= MAX_LENGTH; ++i)
        wordsLength[i] = 0;

    wc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (wc > 0) // stavo contando una parola
            {
               ++wordsLength[wc];
               wc = 0; 
            }
        }
        else
            ++wc;
    }


    // creazione diagramma, disposizione orizzontale
    printf("Istograma parole con lunghezze: \n");
    for (i = 1; i <= MAX_LENGTH; ++i)
    {
        printf(" %d: ", i);


        for (j = 0; j < wordsLength[i]; ++j)
            putchar('*');
        putchar('\n');
    }

    printf("Disposizione verticale\n");
    for (i = 1; i <= MAX_LENGTH; ++i)
    {
        for (j = 0; j < wordsLength[i]; ++j)
        {
            putchar('*');
            putchar('\n');
        }
        printf("%d", i);
    }
    return 0;
}


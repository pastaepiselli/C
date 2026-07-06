#include<stdio.h>

int main()
{
    // programma che stampa le parole di un file una parola per riga 
    int c;

    while ((c = getchar()) != EOF)
    {
       if (c == ' ' || c == '\n')
           putchar('\n');
       else
           putchar(c);
    }
    return 0;
}

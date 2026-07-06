#include<stdio.h>

int main()
{
    // program that counts blanks
    int c, bl, tab, nl; 

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++nl;    
    }
    printf("Numero totale spazi: %d\n", bl);
    printf("Numero totale di tab: %d\n", tab);
    printf("Numero totale di new line: %d\n", nl);
    return 0;
}

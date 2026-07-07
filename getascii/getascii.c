#include<stdio.h>
#include<string.h>

void tobinary(int); // conversine in binario

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Please insert only a charcter\n");
        return 1;
    }

    if (strlen(*argv) > 1)
    {
        printf("Please insert only a charcter\n");
        return 1;
    }
    
    char c = argv[1][0];
    printf("DEC: %d, OCT: %o, HEX: %x, ", c, c, c);
    printf("BIN: ") ; tobinary(c); printf("Symbol: %c\n", c);
    return 0; 
}

void tobinary(int n)
{
    int binary[8]  = {0}; // creo l'array di numeri che conterra il numero binario 
    int i;
    i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for (i = 8 - 1; i >= 0; i--)
        printf("%d", binary[i]);
    printf(", ");
}




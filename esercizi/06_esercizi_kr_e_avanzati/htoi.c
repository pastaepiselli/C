#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char hex[] = "2CE";
    int i, c;
    long sum = 0;
    int len = strlen(hex);

    for (i = 0; i < len ; ++i)
    {
        c = hex[i];
        if (c == 'A')
            c = 10;
        else if (c == 'B')
            c = 11;
        else if (c == 'C')
            c = 12;
        else if (c == 'D')
            c = 13;  
        else if (c == 'E')
            c = 14;  
        else if (c == 'F')
            c = 15;  
        else // conversione a digit
            c = c - '0';


        printf("Valore di c: %d\n", c);

        sum += c * pow(16, (len -1) - i); 
    }
    printf("%li\n", sum);
    return 0;
}


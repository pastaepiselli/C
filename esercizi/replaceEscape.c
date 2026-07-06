#include<stdio.h>
int main()
{
    // write a program to copy its input output replacing each \t, \b with their corrisponding character (u know what i mean)
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('\t');
        }
         
        else if (c == '\b')
        { 
            putchar('\\');
            putchar('b');
        }

        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }
    return 0;
}

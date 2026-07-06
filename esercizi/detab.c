#include<stdio.h>

#define TAB 4


int main()
{
    int c, position, tablength;
    position = 0;
    while ((c = getchar()) != EOF)
    {
        tablength = TAB - (position % TAB); 
        if (c == '\t') // replace con blank
            for (int i = 0; i <= tablength; ++i)
            {
                putchar(' ');
                ++position;
            }
        else
        {
            putchar(c);
            ++position;
        }

        if (c == '\n') position = 8;
    }
    return 0;
}

#include<stdio.h>

int main ()
{

    // write a program that removese string of space with only one space
    int c, lastchar;

    lastchar = EOF;
    while((c = getchar()) != EOF){
        if (c == ' ' && lastchar == ' '){
            // non fare niente
            ;
        } else
            putchar(c);
        lastchar = c;
    }
    return 0;
}

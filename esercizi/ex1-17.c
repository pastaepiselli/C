/* write a program to print all input lines thata are longer than 80 characters */
#include<stdio.h>
#define MAXLINE 1000
#define MIN 80

int getLine(char line[], int maxline);

void copy(char to[], char from[]);

int main()
{
    int len, max;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0)
    {
        if (len > MIN)
        {
            printf("%s\n", line);
        }

    }

    return 0;

}

// ottiene riga e ritorna lunghezza
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c !='\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0'; // carattere standard che indica la fine di una parola
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}  


#include<stdio.h>

#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern = "ould";
int main()
{
    char line[MAXLINE];
    int found  = 0;

    while (getline(line, MAXLINE) > 0)
    {
        if (strindex(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }
    }
    return found;
}

// ottieni la riga e ritorna la lunghezza
int getline(char line[], int max)
{
    int c, i;
    
    i = 0;
    while (--max > 0 && (c = getchar()) != EOF &&  c != '\n') 
        s[i++] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strindex(char source[], char searchfor[])
{

}

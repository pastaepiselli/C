#include<stdio.h>

#define MAX_LENGTH 1000
void reverse(char line[],char newline[],  int len);
int getLine(char line[], int max);

int main()
{

    int len;
    char line[MAX_LENGTH];
    char reversed[MAX_LENGTH];

    while ((len = getLine(line, MAX_LENGTH)) > 0)
    {
        reverse(line, reversed, len);
        printf("%s", reversed);
    }
    return 0;
}

int getLine(char line[], int max)
{
    int i, c;
    
    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
        line[i] = c;

    if (c == '\n'){
        line[i] = '\n';
        ++i;
    }
    
    line[i] = '\0'; 
    return i;
}   

void reverse(char line[], char newline[], int len)
{
    int i, j;
    
    j = 0;
    for (i = len - 1; i >= 0; --i)
    {
        newline[j] = line[i];
        j++;
    }
    
    newline[j] = '\0';
}

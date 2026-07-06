#include<stdio.h>
#define MAX 1000
// wirte a progra to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines

void removeblanks(char line[], int len)
{
    int i;
    for (i = len - 2; line[i] == ' ' || line[i] == '\t'; --i)
        ;
    line[i + 1] = '\n';
    line[i + 2] = '\0';

}
int getLines(char line[], int max)
{

    int i, c;

    for (i = 0; i <=  max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
        line[i] = c;

    if (c == '\n')
    {
        line[i] = '\n';
        ++i;
    }

    line[i] = '\0';

    return i;
}


int main()
{
    int len;
    char line[MAX];

    while ((len = getLines(line, MAX)) > 0)
    {
        removeblanks(line, len);        
        printf("%s\n", line);
    }

}

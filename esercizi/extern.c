#include<stdio.h>
#define MAXLINE 1000 // lughezza massima riga
int max; // lunghezza masssima vista fino a questo punto
char line[MAXLINE]; 
char longest[MAXLINE];

int getLine(void);
void copy(void);

int main (){
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getLine()) > 0) // finche ci sono linee

        if (len > max)
        {
            max = len;
            copy();
        }

    if (max > 0) // esiste una riga
        printf("%s", longest);
    return 0;
}

int getLine(void)
{
    int c, i;
    extern char line[];


    for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    
    line[i] = '\0';
    return i;

}

void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0') // notare come ogni iterazione viene eseguito questo in line
        ++i;
}

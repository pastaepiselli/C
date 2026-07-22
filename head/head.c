/* copia del comando head che ritorna la prima parte di un file in input*/
#include<stdio.h>
#include<unistd.h>


int maxlines;
int main(int argc, char *argv[]);


void getarguments(int argc, char *argv[])
{
    int opt;
    // come si faceva sta cosa??
    extern int maxlines;

    while ((opt = getopt(argc, argv, "n:")) != -1)
    {
        switch(opt)
        {
            case 'n':
                maxlines = (int)optarg;
                break;
            
            default:
                printf("Usage sbagliato");
        }
    }

}


int main(int argc, char *argv[])
{

    int c, n;
    int count_lines;
    FILE *file;
    getarguments(argc, argv);

    n = 10;
    file = fopen(argv[3], "r");
    
    while ((c = fgetc(file)) != EOF)
    {
        if (c == '\n')
            count_lines++;
    
        if (count_lines == n)
            break;
    
        printf("%c", c);
    }

    return 0;
}




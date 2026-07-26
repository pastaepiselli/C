/* copia del comando head che ritorna la prima parte di un file in input*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


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
                maxlines = atoi(optarg);
                break;
            
            default:
                printf("Usage sbagliato");
                break;
        }
    }

}


int main(int argc, char *argv[])
{

    int c;
    int count_lines;
    FILE *file = stdin;
    maxlines = 10;

    getarguments(argc, argv);


    file = fopen(argv[optind], "r");
    
    while ((c = fgetc(file)) != EOF)
    {
        if (c == '\n')
            count_lines++;
    
        if (count_lines == maxlines)
            break;
    
        putchar(c);
    }

    putchar('\n');
    fclose(file);

    return 0;
}




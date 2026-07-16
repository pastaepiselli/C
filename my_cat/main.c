#include<stdio.h>
int main(int argc, char *argv[])
{
    int c;
    if (argc != 2)
    {
        printf("%s: Requires a file\n", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[1], "r"); // path + mode (r  = readonly)
    if (file ==  0)
    {
        printf("%s: %s: No such file or directory\n", argv[0], argv[1]);
        return 1;
    }

        
    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }

    fclose(file);
    return 0;

}

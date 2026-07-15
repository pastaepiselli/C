#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage : %s <event-file>\n");
        exit(-1);
    }
    printf("Keylogger active ...\n");

    int file_descriptor = open(argv[1], 0_RDONLY, 0);

}

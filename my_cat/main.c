#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("error");
        return 1;
    }
    int file_descriptor = open(argv[1], O_RDONLY);
    printf("%d\n", file_descriptor);
    ssize_t readed_bytes_num = read(file_descriptor);

    return 0;
}

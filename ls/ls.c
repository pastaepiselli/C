#include<stdio.h> 
#include<dirent.h>
#include<unistd.h>
#include<sys/stat.h>

int show_all = 0;
int main(int argc, char *argv[])
    // argc quante parole sono state scritte prima di runnare il programma
    // argv = "array di stringhe", 
{
    int opt;
    while ((opt = getopt(argc, argv, "a")) != -1)
    {

        switch(opt)
        {
            case 'a':
                show_all = 1;
                break;
            default:
                fprintf(stderr, "usage %s [-a] [path]\n", argv[1]);
        }

    }

    // ottiene il path, se il path e stato inserito usa quello senno usa . 
    const char *path = (argc > 1) ? argv[opt] : ".";

    DIR *dir = opendir(path);
    if(!dir)
    {
        perror("opendir");
        return 1;
    }

    struct dirent *entry;
    while((entry = readdir(dir)) != NULL)
    {
        if (!show_all && entry->d_name[0] == '.') continue;
        printf("%s\n", entry ->d_name);
    }

    closedir(dir);

    return 0;
    
}

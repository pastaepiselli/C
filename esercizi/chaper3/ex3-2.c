#include<stdio.h>

#define MAX_LEN 100
void escape(char src[], char copy[])
{

    int i, c;
    for (i = 0; src[i] != '\0'; i++)
    {
        switch (c)
        {
            case '\n':
                copy[i] = '\\n';
                break;
            case '\t':
                copy[i] = '\\t';
                break;
            default: 
                copy[i] = c;
                break;
        }

    }
    printf("%s", copy);
}

int main(void)
{

    char src[] = "come stai\n tutto bene?";
    char copy[MAX_LEN];  
    escape(src, copy);

}

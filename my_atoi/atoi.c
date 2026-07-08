#include<stdio.h>
int getlen(char s[]);
int atoi(char s[])
{
    int i, n;

    n = 0;

    for (i = 0; i < getlen(s) && s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int getlen(char s[])
{
    int len;
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        ++len;
    return len;
}
int main(void)
{
    char s[] = "-190";
    printf("%d\n", atoi(s));
}


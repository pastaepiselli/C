// return the rightmost occurrence (index) of t (char) in s (char []))
#include<stdio.h>
#include<string.h>
int strrindex(char s[], char t)
{
    int i;
    for (i = strlen(s) - 1; i > 0; i--)
    {
        if (s[i] == t)
            return i;
    }
    return -1;
}
int main(void)
{
    printf("%d\n", strrindex("cazzzata", 'z'));
    return 0;
}

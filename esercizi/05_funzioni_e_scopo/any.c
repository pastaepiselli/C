// Ex 2-4 Write a function that returns the first index in the string s1 where any character from the string s2 occurs, if noone occurs return -1
#include<stdio.h>
int any(char s1[], char s2[]);

int main(void)
{
    char s1[] = "palle";
    char s2[] = "tribu";
    printf("%d\n", any(s1, s2)); 
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;    
    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j]) 
                return i;
    return -1;

}

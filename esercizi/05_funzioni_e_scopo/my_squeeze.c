#include<stdio.h>
// Ex 2-3 Write a squeeze function that removes every character in s1 that appears anywhere in s2

void squezee(char s1[], char s2[])
{
    int i, j;
    int k = 0;
    int found = 0;
    for (i = 0; s1[i] != '\0'; i++) 
    {
        found = 0;
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j]) 
                found = 1;

        if (!found)
        {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
    printf("%s\n", s1); 
}

int main(void)
{
    char s1[] = "lavatrice";
    char s2[] = "lava";

    squezee(s1, s2);
    return 0;

}

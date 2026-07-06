#include<stdio.h>
long power(int, int);

int main(void)
{
    printf("%ld\n", power(2, 2));
    return 0;
}

long power(int b, int e)
{
    int i;
    long sum;

    sum = 1;
    
    for (i = 0; i < e; ++i)
        sum *= b;
    return sum;
}

#include<stdio.h>
int climbStairsRecursion(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int climbStairs(int n)
{
    int one = 1, two = 1;
    int i, temp;
    for (i = 0; i < n; ++i)
    {
        temp = one;
        one = one + two;
        two = temp;
    }
    return one;

}
int main(void)
{
    return 0;
}


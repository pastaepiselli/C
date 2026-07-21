#include<stdio.h>
/* countdown from 10 to 0 than print boom*/
int main()
{
    int countdown;

    countdown = 10;
    while (countdown > 0)
        printf("%d\n", countdown--);
    printf("BOOOM\n");
    return 0;
}

#include <stdio.h>

// verify that the expression getchar() != EOF is 0 or 1
int main(){

    int a = getchar() != EOF;
    printf("%d\n", a);

    return 0;
}

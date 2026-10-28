/*
  Esercizio 1.6 SI verifihi che l;espressione getchar() !+ EOF abbia valore 0 o 1
 */
#include <stdio.h>
int main()
{
  int expr;

  expr = getchar() != EOF;
  printf("%d\n", expr);
}

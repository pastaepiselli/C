#include<stdio.h>
/*
Esercizio 1.4 Si scriva un porgramma che visualizzai una tabella di conversione delle termparature
da Celsius a Fahrenheit.
 */
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("Celsius \tFahrenheit\n");
  while (celsius <= upper)
    {
      fahr = (5.0 / 9.0) * celsius + 32;
      printf("%7.0f \t%10.1f\n", celsius, fahr);
      celsius += step;
    }  
}

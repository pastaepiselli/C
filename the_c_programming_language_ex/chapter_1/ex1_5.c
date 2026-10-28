#include<stdio.h>
/*Esercizio 1.5 Si modifichi la il programma di ocnversione della temperatura per visualizzare la tabella in ordinare inverso, cioe da 300 gradi a zero. */
int main()
{
  float fahr;
  for (fahr = 300; fahr > 0; fahr -= 20)
    {
      printf("%3.0f %6.1f\n", fahr, ((5.0 / 9.0) * (fahr - 32)));
    }
}

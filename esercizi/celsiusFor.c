#include <stdio.h>
// esercizio 1-5 di the c programming language
// (5.0/9.0) * (fahr-32)

float convertToCel(int);
int invertedFor(void)
{
    printf("Reverse order table\n");
    for (int fahr = 300; fahr >=0; fahr -=20)
       printf("%3d %6.1f\n", fahr, convertToCel(fahr));
    return 0;

}

int main()
{
    printf("Uso il for\n");
    // utilizzo del for nella conversione da fahrenheit a celsius
   for (int fahr = 0; fahr <= 300; fahr += 20) 
       printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
   invertedFor();
   return 0;
}

float convertToCel(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}

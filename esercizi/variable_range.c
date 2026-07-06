#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{

    printf("char");
    printf("Valore minimo:%d\n", CHAR_MIN);
    printf("Valore massimo:%d\n", CHAR_MAX);

    printf("signed char\n");
    printf("Valore minimo %d\n", SCHAR_MIN);
    printf("Valore massimo %d\n", SCHAR_MAX);

    printf("signed short int\n");
    printf("Valore minimo %d\n", SHRT_MIN);
    printf("Valore massimo %d\n", SHRT_MAX);

    printf("unsigned short int\n"); // minomo zero
    printf("Valore massimo %d\n", USHRT_MAX);

    printf("signed int\n");
    printf("Valore minimo %d\n", INT_MIN);
    printf("Valore massimo %d\n", INT_MAX);

    printf("unsigned int\n"); // minomo zero
    printf("Valore massimo %u\n", UINT_MAX);

    printf("signed long\n");
    printf("Valore minimo %ld\n", LONG_MIN);
    printf("Valore massimo %ld\n", LONG_MAX);

    printf("unsigned long\n"); // miniomo zero
    printf("Valore massimo %lu\n", ULONG_MAX);


    printf("float\n");
    printf("Valore minimo %f\n", FLT_MIN);
    printf("Valore massimo %f\n", FLT_MAX);

    printf("double\n");
    printf("Valore minimo %f\n", DBL_MIN);
    printf("Valore massimo %f\n", DBL_MAX);


    printf("long double\n");
    printf("Valore minimo %Lf\n", LDBL_MIN);
    printf("Valore massimo %Lf\n",LDBL_MAX);
    
}


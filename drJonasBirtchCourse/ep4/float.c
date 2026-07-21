#include<stdio.h>
/*
 Per utilizzare numeri con decimal point (numeri con la virgola si puo utilizzare)
 %f - float

 %f/%g/%e - double
 */
 
 int main()
{
    // calcolare area di un cerchio
    // radius * radius * PI (costante del pi greco)

    float radius, pi, area;

    pi = 3.14; // per la virgola si usa un punto ... classico

    printf("What is the radius in cm?\n"); 
    scanf("%f", &radius);

    area = radius * radius * pi;
    printf("The area of the circle is %f cm\n", area);

    return 0; 
}

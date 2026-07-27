#include<stdio.h>

// return value  - intput value/s
int area_triangle(int, int);

int main()
{
    int base, height, area;

    printf("Base: "); // senza \n usiamo fflush per mandare tutto a schermo
    fflush(stdout); // stdout e un file descriptor speciale, che rappresenta lo schermo
    scanf("%d", &base);

    printf("Height: "); 
    fflush(stdout); 
    scanf("%d", &height);

    area = area_triangle(base, height);

    printf("The area is %d\n", area);
}

int area_triangle(int base, int height)
{
    int area;

    area = (base * height) / 2;
    return area;
}

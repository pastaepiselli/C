#include<stdio.h>
#include<string.h>

// in C possiamo creare le nostri tipi
// la struct e come un blueprint ( formina ) per poi creare un variabile fr


// la memoria viene allocata in blocchi di 8
struct person {
    char title[8];
    char lastname[32];
    int age;
}; // bisogna chiudere sia } che ; per che tra loro 2 possiamo inserire un nome di una variabile per la declarazione
int main()
{
    struct person lorenzo;

    strncpy(lorenzo.title, "student", 7); // l'ultimo parametro e il massimo numero di caratteri
    strncpy(lorenzo.lastname, "Rossi", 31); 
    lorenzo.age = 21;

    printf("%s %s of age %d\n", lorenzo.title, lorenzo.lastname, lorenzo.age);
    return 0;

}

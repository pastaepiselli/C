#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int our_random_function(int);

int main()
{
    int random;

    random = our_random_function(5);
    printf("%d\n", random);

    random = our_random_function(5);
    printf("%d\n", random);
}

int our_random_function(int max)
{
    // con max e una modulo operation possiamo impstare un massimo alla nostra funzione 
    // che con max = 5 sara 0 1 2 3 4 (non il numero max incluso)
    int x;

     //printf("Process id:%d\n", getpid()); // ottiene il process id (ogni volta runniamo e diverso)
    // con s rand possiamo andare a scegliere il numero dalla lista randomica   
    srand(getpid()); // usiamo cosi il process id di questo programma per ottenere un numero pseudo randomico

    // possiamo notare come questa funzione ritorni sempre lo stesso numero, rand() sceglie da una lista di variabli un numero il questo caso sempre il primo
    x = rand() % max + 1; // function buildin, aggiungiamo 1 per avere un range da 1 a max + 1, invece che da 0 a max 
    return x;

}


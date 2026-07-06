#include <stdio.h>
int main(){

    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Numero di oggetti: %d\n", items);
    printf("Costo di ogni oggetto: %.2f\n", cost_per_item);
    printf("Costo totale: %.2f\n", total_cost);
    return 0;
}

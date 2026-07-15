#include<stdio.h>
// n = lunghezza lista

// x = numero da cercare
int binary_search_kr(int x, int arr[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low <= high){
        mid = (low + high) / 2;
        if (x == arr[mid])
            return mid;
        else if (x > arr[mid])
            low = mid + 1;
        else 
            high = mid - 1;

    }
    return -1;
}

int binary_search(int x, int arr[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low <= high){
        mid = (low + high) / 2;
        if (x > arr[mid])
            low = mid + 1;
        else 
            high = mid - 1;

    }

    if (arr[mid] == x)
        return mid;
    return -1;

}

int main(void)
{
    int x = 4;
    int arr[] = {2, 3, 4, 5, 7, 9};
    int n = 7;
    printf("Binary search of num: %d, result: %d\n", x, binary_search(x, arr, n));
}



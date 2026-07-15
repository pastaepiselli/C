#include<stdio.h>

int insertion_sort(int arr[], int n)
{

    int i, j, temp, elem;
    for(i = 1; i < n; i++)
    {

        elem = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > elem)
        {
            arr[j + 1] = arr[j];
            j--;        
        }
        arr[j + 1] = elem;

    }
}
int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = 6; 

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

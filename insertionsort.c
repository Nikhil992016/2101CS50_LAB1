#include <stdio.h>
  
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, k, j;
    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;
  
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}
  
//function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  

int main()
{
    printf ("Enter the size of array you want to sort \n");
    int n;
    scanf ("%d" , &n);
    int arr[n];
    printf("Now, Enter elements\n");
    for ( int i = 0; i < n ; i++)
    {
        scanf( "%d" ,  &arr[i]) ;
    }

    insertionSort(arr, n);
    printArray(arr, n);
  
    return 0;
}
#include <stdio.h>
#include "sort.h"

int main(){
    int array[10]={1,2,3,45,54,32,7,78,90,100};
    int arr[8] = {1, 12, 45, 56, 67, 100, 99,88};
    int size = sizeof(arr) / sizeof(arr[0]);
    int size_of_array=sizeof(array)/sizeof(array[0]);
  
    printf("mergesort:\n");
    printf("Before Sorting:\n");
    display(arr, size);
    mergesort(arr,0,size);
    printf("After Sorting:\n");
    display(arr, size);
    
    printf("\nheapesort:\n");
    printf("Before Sorting: \n");
    display(array,size_of_array);
    heapsort(array,size_of_array);
    printf("After Sorting: \n");
    display(array,size_of_array);

    printf("\nquicksort:\n");
    printf("Before Sorting: \n");
    display(array,size_of_array);
    quicksort(array,size_of_array);
    printf("After Sorting: \n");
    display(array,size_of_array);

   
    return 0;
}

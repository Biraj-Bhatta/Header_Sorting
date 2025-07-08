#include<stdio.h>

// PRIVATE STATIC DECLARATIONS
static void swap(int *m, int *n);
static void maxheapify(int arr[], int i, int size);
static void merge(int arr[], int start, int mid, int end);
static void quick_recursion(int arr[], int low, int high);
static int partition(int arr[], int low, int high);

//PUBLIC DECLARATIONS
void bubblesort(int arr[], int size);
void display(int arr[], int size);
void heapsort(int arr[],int size);
void insersionSort(int arr[],int size);
void mergeSort(int arr[], int start, int end);
void quicksort(int arr[],int length);
void selectionsort(int arr[],int size);

// Static functions
static void swap(int *m, int *n) {
    int temp = *m;
    *m = *n;
    *n = temp;
}
static void maxheap(int arr[],int beg,int end ){
    int i;
    for(i=end/2;i >= beg;i--){
        maxheapify(arr,i,end);
    }
}
static void maxheapify(int arr[],int i,int size){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left <= size && arr[left] > arr[largest]){
        largest=left;
    }
    if(right <= size && arr[right] > arr[largest]){
        largest=right;
    }
    if(largest != i){
        swap(&arr[i],&arr[largest]);
        maxheapify(arr,largest,size);
    }
}
static void merge(int arr[], int start, int mid, int end)
{
    int array[end];
    int i = start;
    int k = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            array[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            array[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        array[k] = arr[i];
        k++;
        i++;
    }
    while (j <= end)
    {
        array[k] = arr[j];
        k++;
        j++;
    }
    for (int i = start; i <= end; i++)
    {
        arr[i] = array[i];
    }
}
static void quick_recursion(int arr[],int low,int high){
    if (low<high){
        int pivot;
        pivot=partition(arr,low,high);
        quick_recursion(arr,low,pivot-1);
        quick_recursion(arr,pivot+1,high);
    }
}
static int partition(int arr[],int low,int high){
    int pivotValue=arr[high];
    int i=low,j;
    for(j=low;j< high;j++){
        if(arr[j] <= pivotValue){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[high]);
    return i;
}
void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
static void HeapSort(int arr[],int size){
    int i;
    for(i=size; i >= 0;i--){
        swap(&arr[0],&arr[i]);
        maxheapify(arr,0,i-1);
    }
}


// Non-static function
void bubblesort(int arr[], int size) {
    int isSwap = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < (size - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                isSwap = 1;
            }
        }
        if (isSwap == 0) {
            printf("The array is already sorted.\n");
            return;
        }
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void heapsort(int arr[],int size){
    size=size-1;
    maxheap(arr,0,size);
    HeapSort(arr,size);
}

void insersionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int current=arr[i];
        int prev=i-1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
}
void mergesort(int arr[], int start, int end){
    end=end-1;
    mergeSort(arr,start,end);
}

void quicksort(int arr[],int length){
    quick_recursion(arr,0,length-1);
}

void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int smallest=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(&arr[i],&arr[smallest]);
    }
}

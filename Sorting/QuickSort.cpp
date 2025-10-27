#include <iostream>
using namespace std;

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;

    while (1)
    {
        do{
            i++;
        }while (i <= h && arr[i] < pivot);

        do{
            j--;
        }
        while(j >= l && arr[j] > pivot);

        if (i >= j)
        return j;

        swap(&arr[i], &arr[j]);
        
    }
    
}

int quickSort(int arr[], int l, int h){
    if(l<h){
        int p = partition(arr, l, h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
      int arr[] = {10,3,45,6,76,8,79,46,90};
      int size = sizeof(arr)/sizeof(arr[0]);

      printf("The sorted array is: \n");

      quickSort(arr, 0,size - 1);
      printArray(arr, size);

      return 0;
}
#include <iostream>

using namespace std;

int partition (int arr[], int l, int h){
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h -1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

void QuickSort(int arr[], int l, int h){
    if(l < h){
        int p = partition(arr, l, h);
        QuickSort(arr, l, p - 1);
        QuickSort(arr, p + 1, h);
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
    QuickSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}
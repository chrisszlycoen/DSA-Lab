#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i= 0; i < n-1; i++){
        int targetIndex = i;
        for(int j = i+1 ; j < n; j++){
            if(arr[j] < arr[targetIndex]){
                targetIndex = j;
            }
        }
        if(targetIndex != i){
            swap(arr[i], arr[targetIndex]);
        }
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
    SelectionSort(arr, size);
    printArray(arr, size);
    return 0;
}
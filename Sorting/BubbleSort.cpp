#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    int count = 0;
    bool swapped; //Track if a swap happens

    for (int i = 0; i < n - 1; i++) {
        swapped = false; //reset swap flag for each pass

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                swap(&arr[j + 1], &arr[j]);
                swapped = true;
            }
            //count++;
        }

        // If no swap happened, array is sorted
        if (!swapped) {
            cout << "Array already sorted\n";
            break;
        }
    }

    //cout << "Running times (comparisons): " << count << endl;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The sorted array is:\n";
    bubbleSort(arr, size);
    printArray(arr, size);
}

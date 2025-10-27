#include <iostream>

using namespace std;

int BinarySort(int arr[], int n, int key){
    int s = 0; e = n -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            e = mid -1;
        }else if (arr[mid] > key){
            e = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Enter the value of the key: ";
    cin>>key;

    sort(arr, arr+n);

    int pos = BinarySort(arr, n, key);

    if (pos == -1){
        cout<<"Key not found";
    }else{
        cout<<"Key found at index "<<pos<<endl;
    }
}
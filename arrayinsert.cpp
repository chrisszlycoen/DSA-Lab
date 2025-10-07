#include <iostream>
using namespace std;
int main(){
    int array[] = {52,78,75,68,88,63,75,90,78};
    int item = 10, k =3, len = 9, j= len -1;
    while(j>=k){
        array[j + 1] = array[j];
        j--;
    }
    array[k] = item;
    for (int i = 0; i < len + 1; i++){
        cout<< array[i] << " ";
    }
    return 0;
}
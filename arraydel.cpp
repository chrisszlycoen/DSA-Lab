#include <iostream>

using namespace std;

int main(){
    int array[9] = {52,78,75,68,88,63,75,90,78};
    int k = 3, length = 9, j = k;
    while(j < length -1){
        array[j] = array[j + 1];
        j++;
    }
    for(int i = 0; i < 10; i++){
        cout<< array[i] << " ";
    }
    return 0;
}
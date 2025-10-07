#include <iostream>

using namespace std;

void removeChar(char str[], char ch){
    if (str[0] == '\0'){
        return;
    }
    if(str[0] != ch){
        cout<< str[0] << " ";
    }

    removeChar(str + 1, ch);
}

int main(){
    char str[] = "abacada";
    char ch = 'a';
    removeChar(str,ch);
}
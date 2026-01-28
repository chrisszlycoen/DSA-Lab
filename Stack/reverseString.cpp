#include<bits/stdc++.h>

using namespace std;

string reverseString(string str){
    stack<char> s;
    string reverseString;
    for(char i:str){
        s.push(i);
    }
    while(!s.isEmpty()){
        reverseString.push_back(s.top());
        s.pop();
    }
    return reverseString;
}
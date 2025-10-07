#include<bits/stdc++.h>

using namespace std;

int main(){
    time_t today = time(0);
    cout<<asctime(localtime(&today));
    return 0;
}
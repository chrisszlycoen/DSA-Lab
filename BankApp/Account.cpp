#include <bits/stdc++.h>

using namespace std;

struct Account 
{
    int balance = 0;
    
    void setBalance(int bal){
        if(bal>0){
            this->balance = bal;
        }
    }

    int getBalance(){
        return this->balance;
    }

    int withdraw(int amount){
        if (amount<=balance){
            balance -= amount;
        }
        return balance;
    }

    int deposit (int amount){
        if (amount > 0){
            balance += amount;
        }
        return balance;
    }
};

#include <bits/stdc++.h>
using namespace std;

int n = 100;
int front = -1;
int rear = -1;
int arrQueue[100];


void enqueue(int val){
    if(rear == n-1){
        cout<<"Overflow"<<endl;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    arrQueue[rear] = val;
}

void deQueue(){
    if(front == -1){
        cout<<"is empty";
    }
    front++;
}

void display(int front, int rear){
    for(int i = front; i<rear; i++){
        cout<<arrQueue[i]<<" ";
        front++;
    }
    cout<<endl;
}

void peek(){
    if(front == -1){
        cout<<"Queue is empty";
    }
    cout<<arrQueue[front];
}

int main(){
    enqueue(10);
    enqueue(20);
    display(0,2);
    peek();
}

#include <iostream>
using namespace std;

class Node {
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->data = nullptr;
    }
    
};

Node * addFront(Node *head, int data){
    Node *newNode = new Node(data);
    newNode->next = head;
    return newNode;
}

void displayList(Node *head){
    while(head != nullptr){
        cout<< head->data<<" ";
        head = head->next;
    }
}

Node *reverseList(Node *head){
    Node * current = nullptr;
    Node * prev = nullptr;
    Node *next = nullptr;
    
    While(head != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next; 
    }
    return prev;
}

int main(){
    Node 
}
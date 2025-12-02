#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

Node* head = nullptr;

// Display DLL
void display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Insert at beginning
void insertBeginning(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head) head->prev = newNode;
    head = newNode;
}

// Insert at end
void insertEnd(int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at any position (1-based)
void insertAtPos(int val, int pos) {
    if (pos == 1) {
        insertBeginning(val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (!temp) return;

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next)
        temp->next->prev = newNode;

    temp->next = newNode;
}


// Delete at beginning
void deleteBeginning() {
    if (!head) return;

    Node* temp = head;
    head = head->next;

    if (head) head->prev = nullptr;

    delete temp;
}

// Delete at end
void deleteEnd() {
    if (!head) return;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    if (temp->prev)
        temp->prev->next = nullptr;
    else
        head = nullptr;

    delete temp;
}

// Delete at any position
void deleteAtPos(int pos) {
    if (pos == 1) {
        deleteBeginning();
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos && temp; i++)
        temp = temp->next;

    if (!temp) return;

    if (temp->prev) temp->prev->next = temp->next;
    if (temp->next) temp->next->prev = temp->prev;

    delete temp;
}

int main() {
    insertBeginning(20);
    insertBeginning(10);
    insertEnd(30);
    insertAtPos(15, 2);

    display();

    deleteBeginning();
    deleteEnd();
    deleteAtPos(2);
    cout<<"After deleting"<<endl;
    display();
}

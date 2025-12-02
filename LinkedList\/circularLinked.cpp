#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* head = nullptr;

// Display circular list
void display() {
    if (!head) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(HEAD)\n";
}

// Insert at beginning
void insertBeginning(int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

// Insert at end
void insertEnd(int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

// Insert at any position (1-based)
void insertAtPos(int val, int pos) {
    if (pos == 1) {
        insertBeginning(val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp->next == head) break;
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete at beginning
void deleteBeginning() {
    if (!head) return;

    Node* temp = head;
    Node* curr = head;

    while (curr->next != head)
        curr = curr->next;

    if (head == curr) {
        head = nullptr;
        delete temp;
        return;
    }

    curr->next = head->next;
    head = head->next;
    delete temp;
}

// Delete at end
void deleteEnd() {
    if (!head) return;

    Node* temp = head;
    Node* prev = nullptr;

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == head) {
        head = nullptr;
        delete temp;
        return;
    }

    prev->next = head;
    delete temp;
}

// Delete at any position (1-based)
void deleteAtPos(int pos) {
    if (pos == 1) {
        deleteBeginning();
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    for (int i = 1; i < pos; i++) {
        prev = temp;
        temp = temp->next;
        if (temp == head) break;
    }

    prev->next = temp->next;
    delete temp;
}

int main() {
    insertBeginning(30);
    insertBeginning(20);
    insertBeginning(10);
    insertEnd(40);
    insertAtPos(25, 3);

    display();

    deleteBeginning();
    deleteEnd();
    deleteAtPos(2);
    cout<<"after deleting"<<endl;
    display();
}

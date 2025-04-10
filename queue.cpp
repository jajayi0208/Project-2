#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
front = nullptr;
back = nullptr;
}

void Queue::forward(int value) {
Node* newNode = new Node;
newNode->val = value;
newNode->next = nullptr;
if (back == nullptr) {
front = newNode;
back = newNode;
} else {
back->next = newNode;
back = newNode;
}
}

int Queue::backward() {
if (isEmpty()) {
cout << "Queue is empty!" << endl;
return -1;
}
Node* temp = front;
int value = temp->val;
front = front->next;
if (front == nullptr) {
back = nullptr;
}
delete temp;
return value;
}

bool Queue::isEmpty() {
return front == nullptr;
}
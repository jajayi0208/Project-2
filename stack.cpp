#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
top = nullptr;
}

void Stack::push(int value) {
Node* newNode = new Node;
newNode->val = value;
newNode->next = top;
top = newNode;
}

int Stack::pop() {
if (isEmpty()) {
cout << "Stack is empty" << endl;
return -1;
}
Node* temp = top;
int value = temp->val;
top = top->next;
delete temp;
return value;
}

bool Stack::isEmpty() {
return top == nullptr;
}

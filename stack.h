#ifndef STACK_H
#define STACK_H

struct Node {
int val;
Node* next;
};

class Stack {
public:
Stack();
void push(int value);
int pop();
bool isEmpty();
private:
Node* top;
};

#endif
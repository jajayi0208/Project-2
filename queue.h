#ifndef QUEUE_H
#define QUEUE_H

struct Node {
int val;
Node* next;
};

class Queue {
public:
Queue();
void forward(int value);
int backward();
bool isEmpty();
private:
Node* front;
Node* back;
};

#endif






#include <iostream>
#include <cmath>
#include "Stack.h"
#include "Queue.h"

using namespace std;

void convertIntegerToBinary(int integerPart) {
Stack stack;
while (integerPart > 0) {
stack.push(integerPart % 2);
integerPart /= 2;
}

cout << "Binary of integer part: ";
while (!stack.isEmpty()) {
cout << stack.pop();
}
cout << endl;
}

void convertDecimalToBinary(double decimalPart) {
Queue queue;
while (decimalPart > 0 && queue.isEmpty() == false) {
decimalPart *= 2;
int bit = static_cast<int>(decimalPart);
queue.forward(bit);
decimalPart -= bit;
}

cout << "Binary of decimal part: ";
while (!queue.isEmpty()) {
cout << queue.backward();
}
cout << endl;
}

int main() {
double number;
cout << "Enter a decimal number: ";
cin >> number;

int integerPart = static_cast<int>(number);
double decimalPart = number - integerPart;

convertIntegerToBinary(integerPart);
convertDecimalToBinary(decimalPart);

return 0;
}
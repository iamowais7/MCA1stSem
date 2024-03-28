#include <iostream>
using namespace std;

void swapNumbers(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Display original numbers
    cout << "Original numbers: " << num1 << " " << num2 << endl;

    // Call the swap function with pointers
    swapNumbers(&num1, &num2);

    // Display swapped numbers
    cout << "Numbers after swapping: " << num1 << " " << num2 << endl;

    return 0;
}


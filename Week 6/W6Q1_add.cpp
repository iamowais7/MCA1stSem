#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Point pointers to the addresses of num1 and num2
    ptr1 = &num1;
    ptr2 = &num2;

    // Add numbers using pointers
    sum = *ptr1 + *ptr2;

    // Display the result
    cout << "Sum of the two numbers: " << sum << endl;

    return 0;
}


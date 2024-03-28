#include <iostream>
using namespace std;

int main() {
    int number;
    int* ptr;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // Assign the address of the variable 'number' to the pointer
    ptr = &number;

    // Increment the value using pointer
    (*ptr)++;
    cout << "After increment, number: " << *ptr << endl;

    // Decrement the value using pointer
    (*ptr)--;
    cout << "After decrement, number: " << *ptr << endl;

    return 0;
}


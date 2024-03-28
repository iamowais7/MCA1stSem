#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // Declare a pointer and assign the address of the variable 'number' to it
    int* ptr = &number;

    // Print the address of the variable using the pointer
    cout << "Address of the variable: " << ptr << endl;

    return 0;
}


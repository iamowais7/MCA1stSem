#include <iostream>
using namespace std;

int main() {
    char str[100];
    char* ptr;

    // Input a string
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Assign the base address of the string to the pointer
    ptr = str;

    // Print the string using pointer
    cout << "String entered: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    
    cout << endl;

    return 0;
}


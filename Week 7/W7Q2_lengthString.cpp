#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;
    // Iterate through the string using the pointer until the null character is encountered
    while (*str != '\0') {
        length++;
        str++; // Move to the next character in the string using the pointer
    }
    return length;
}

int main() {
    const int maxLength = 100;
    char inputString[maxLength];

    // Input a string
    cout << "Enter a string: ";
    cin.getline(inputString, maxLength);

    // Call the function to calculate string length and display the result
    int length = stringLength(inputString);
    cout << "Length of the string: " << length << endl;

    return 0;
}


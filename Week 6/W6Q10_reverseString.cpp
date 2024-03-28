#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    int length = strlen(str);
    char* start = str;
    char* end = str + length - 1;

    // Swap characters from start to end of the string
    while (start < end) {
        // Swap characters at start and end positions
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move start pointer forward and end pointer backward
        start++;
        end--;
    }
}

int main() {
    const int maxLength = 100;
    char inputString[maxLength];

    // Input a string
    cout << "Enter a string: ";
    cin.getline(inputString, maxLength);

    // Call function to reverse the string
    reverseString(inputString);

    // Print the reversed string
    cout << "Reversed string: " << inputString << endl;

    return 0;
}


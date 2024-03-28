#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstString[100], secondString[100];
    char* ptr1;
    char* ptr2;

    // Input first string
    cout << "Enter the first string: ";
    cin.getline(firstString, 100);

    // Input second string
    cout << "Enter the second string: ";
    cin.getline(secondString, 100);

    // Find the length of the first string
    int length1 = strlen(firstString);

    // Point ptr1 to the null character at the end of the first string
    ptr1 = firstString + length1;

    // Point ptr2 to the beginning of the second string
    ptr2 = secondString;

    // Concatenate the second string to the first string using pointers
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    // Add null character at the end to terminate the concatenated string
    *ptr1 = '\0';

    // Print the concatenated string
    cout << "Concatenated string: " << firstString << endl;

    return 0;
}


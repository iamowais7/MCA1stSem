#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    // Compare the original string with its reverse
    return str == reversedStr;
}

int main() {
    string inputString;

    // Input the string
    cout << "Enter a string: ";
    cin >> inputString;

    // Check if the input string is a palindrome or not
    if (isPalindrome(inputString)) {
        cout << inputString << " is a palindrome." << endl;
    } else {
        cout << inputString << " is not a palindrome." << endl;
    }

    return 0;
}


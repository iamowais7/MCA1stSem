#include <iostream>
#include <cstring>
using namespace std;

int countVowels(const char* str) {
    int count = 0;
    while (*str) {
        // Check if the character is a vowel (uppercase or lowercase)
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++; // Move to the next character in the string using the pointer
    }
    return count;
}

int main() {
    const int maxLength = 100;
    char inputString[maxLength];

    // Input a string
    cout << "Enter a string: ";
    cin.getline(inputString, maxLength);

    // Call the function to count vowels and display the result
    int vowelCount = countVowels(inputString);
    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, originalNumber, remainder, result = 0;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    originalNumber = number;

    // Check if it is a 3-digit number
    if (number >= 100 && number <= 999) {
        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += pow(remainder, 3);
            originalNumber /= 10;
        }

        if (result == number) {
            cout << number << " is an Armstrong number." << endl;
        } else {
            cout << number << " is not an Armstrong number." << endl;
        }
    } else {
        cout << "Invalid input. Please enter a 3-digit number." << endl;
    }

    return 0;
}


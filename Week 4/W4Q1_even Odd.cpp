#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Using ternary operator to check if the number is even or odd
    string result = (number % 2 == 0) ? "Even" : "Odd";

    cout << number << " is " << result << endl;

    return 0;
}


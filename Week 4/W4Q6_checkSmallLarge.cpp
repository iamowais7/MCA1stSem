#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "Entered character is a letter." << endl;
        if (ch >= 'A' && ch <= 'Z') {
            cout << "It's a capital letter." << endl;
        } else {
            cout << "It's a small case letter." << endl;
        }
    } else if (ch >= '0' && ch <= '9') {
        cout << "Entered character is a digit." << endl;
    } else {
        cout << "Entered character is a special symbol." << endl;
    }

    return 0;
}


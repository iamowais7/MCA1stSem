#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms you want in the Fibonacci sequence: ";
    cin >> n;

    int first = 0, second = 1, nextTerm;

    cout << "Fibonacci Sequence: " << first << " " << second << " ";

    for (int i = 3; i <= n; ++i) {
        nextTerm = first + second;
        cout << nextTerm << " ";
        first = second;
        second = nextTerm;
    }

    cout << endl;

    return 0;
}


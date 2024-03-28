#include <iostream>
using namespace std;

int main() {
    // Read values from the standard input
    float a, b, c, d, e, f, g;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;
    cout << "Enter value for d: ";
    cin >> d;
    cout << "Enter value for e: ";
    cin >> e;
    cout << "Enter value for f: ";
    cin >> f;
    cout << "Enter value for g: ";
    cin >> g;

    // Evaluate the arithmetic expression
    float result = ((a + (b / c) * d - e) * (f - g));

    // Display the result
    cout << "Result of the expression ((a + b / c * d - e) * (f - g)) is: " << result << endl;

    return 0;
}


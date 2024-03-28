#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    // Calculate roots
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);

    cout << "Root 1: " << root1 << endl;
    cout << "Root 2: " << root2 << endl;

    return 0;
}



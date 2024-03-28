#include <iostream>
using namespace std;

void swapVal(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping (Value): " << a << " " << b << endl;
}

void swapRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping (Reference): " << a << " " << b << endl;
}

int main() {
    int num1, num2, x;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose swap manner:" << endl;
    cout << "1 for Value" << endl;
    cout << "2 for Reference" << endl;
    cin >> x;

    switch (x) {
        case 1:
            swapVal(num1, num2);
            break;
        case 2:
            swapRef(num1, num2);
            break;
        default:
            cout << "Invalid Option " << endl;
    }

    return 0;
}


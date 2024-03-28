#include <iostream>
using namespace std;

int main() {
    const int size = 5; // Size of the array
    int elements[size]; // Array to store elements
    int* ptr = elements; // Pointer initialized to the first element address

    // Read elements into the array using a pointer
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> *(ptr + i); // Equivalent to elements[i] = *(ptr + i);
    }

    // Display elements using an array
    cout << "Elements entered: ";
    for (int i = 0; i < size; ++i) {
        cout << elements[i] << " ";
    }
    cout << endl;

    return 0;
}


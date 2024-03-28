#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    // Reversing the array
    for (int i = 0; i < size / 2; ++i) {
        // Swap elements at position i and size - i - 1
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }

    // Displaying the reversed array
    cout << "Reversed array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}


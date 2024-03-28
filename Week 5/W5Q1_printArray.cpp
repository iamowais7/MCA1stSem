#include <iostream>
using namespace std;

int main() {
    int size;

    // Asking the user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declaring an array of the specified size
    int array[size];

    // Asking the user to enter elements into the array
    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    // Displaying the elements of the array
    cout << "Elements in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}


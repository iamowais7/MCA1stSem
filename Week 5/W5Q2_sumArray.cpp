#include <iostream>
using namespace std;

int main() {
    int size, sum = 0;

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
        
        // Calculating the sum of the entered elements
        sum += array[i];
    }

    // Displaying the sum of the elements in the array
    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}


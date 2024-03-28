#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0;

    cout << "Enter " << size << " elements into the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];

        // Counting positive, negative, odd, and even numbers
        if (array[i] > 0) {
            positiveCount++;
            if (array[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        } else if (array[i] < 0) {
            negativeCount++;
            if (array[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        } else {
            evenCount++;
        }
    }

    // Displaying counts
    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    cout << "Even numbers: " << evenCount << endl;

    return 0;
}


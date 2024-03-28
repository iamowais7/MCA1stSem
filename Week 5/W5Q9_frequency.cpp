#include <iostream>
using namespace std;

int main() {
    int size, number;
    cout << "Enter the number of elements in the list: ";
    cin >> size;

    int list[size];

    cout << "Enter " << size << " integers into the list:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> list[i];
    }

    cout << "Enter the number to find its frequency: ";
    cin >> number;

    int frequency = 0;

    // Calculate the frequency of the number in the list
    for (int i = 0; i < size; ++i) {
        if (list[i] == number) {
            frequency++;
        }
    }

    // Display the frequency of the number
    cout << "Frequency of number " << number << " in the list: " << frequency << endl;

    return 0;
}


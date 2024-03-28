#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size < 2) {
        cout << "Invalid input. Please enter at least two integers." << endl;
        return 1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int num;

    for (int i = 0; i < size; ++i) {
        cin >> num;
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest) {
            secondLargest = num;
        }
    }

    cout << "The second largest integer is: " << secondLargest << endl;

    return 0;
}


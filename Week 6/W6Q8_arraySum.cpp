#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare an array of size n

    // Input elements into the array using a pointer
    int* ptr = arr;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> *(ptr + i); // Equivalent to arr[i] = *(ptr + i);
    }

    // Calculate the sum of elements using a pointer
    for (int i = 0; i < n; ++i) {
        sum += *(ptr + i); // Equivalent to sum += arr[i];
    }

    // Display the sum
    cout << "Sum of " << n << " elements: " << sum << endl;

    return 0;
}


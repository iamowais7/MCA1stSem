#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "Enter the size of the first sorted array: ";
    cin >> size1;
    cout << "Enter the size of the second sorted array: ";
    cin >> size2;

    int arr1[size1], arr2[size2], merged[size1 + size2];
    
    cout << "Enter elements for the first sorted array:" << endl;
    for (int i = 0; i < size1; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr1[i];
    }
    
    cout << "Enter elements for the second sorted array:" << endl;
    for (int i = 0; i < size2; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr2[i];
    }

    int i = 0, j = 0, k = 0;
    
    // Merge the two sorted arrays into the 'merged' array
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            ++i;
        } else {
            merged[k] = arr2[j];
            ++j;
        }
        ++k;
    }
    
    // If there are remaining elements in arr1, copy them to merged
    while (i < size1) {
        merged[k] = arr1[i];
        ++i;
        ++k;
    }

    // If there are remaining elements in arr2, copy them to merged
    while (j < size2) {
        merged[k] = arr2[j];
        ++j;
        ++k;
    }

    // Display the merged sorted array
    cout << "Merged Sorted Array:" << endl;
    for (int i = 0; i < size1 + size2; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}


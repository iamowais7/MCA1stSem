#include <iostream>
using namespace std;

void disArr(int arr[], int len, int index) {
    if (index >= len) {
        return;
    }

    cout << arr[index] << " ";
    disArr(arr, len, index + 1);
}
int main() {
    int len;
    cout << "Enter the size of the array: ";
    cin >> len;

    int arr[len];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < len; ++i) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    disArr(arr, len, 0);

    return 0;
}


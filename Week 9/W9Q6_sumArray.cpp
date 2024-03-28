#include <iostream>
using namespace std;
int arrSum(int arr[], int len, int index) {
    if (index >= len) {
        return 0;
    }

    return arr[index] + arrSum(arr, len, index + 1);
}
int main() {
    int len;
    cout << "Enter number of elements: ";
    cin >> len;

    int arr[len];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < len; ++i) {
        cin >> arr[i];
    }
    int sum = arrSum(arr, len, 0);
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}


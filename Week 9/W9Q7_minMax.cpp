#include <iostream>
#include <climits> 
using namespace std;


int findMax(int arr[], int len, int index) {
    if (index == len - 1) {
        return arr[index]; 
    }

    int maxInRest = findMax(arr, len, index + 1); 
    return max(arr[index], maxInRest); 
}


int findMin(int arr[], int len, int index) {
    if (index == len - 1) {
        return arr[index]; 
    }

    int minInRest = findMin(arr, len, index + 1); 
    return min(arr[index], minInRest); 
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

    
    int maxNum = findMax(arr, len, 0);
    int minNum = findMin(arr, len, 0);

    
    cout << "Maximum element: " << maxNum << endl;
    cout << "Minimum element: " << minNum
	 << endl;

    return 0;
}


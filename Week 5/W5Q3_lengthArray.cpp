#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};  // Example array
    
    // Calculate the length of the array using a for loop
    int length = 0;
    for (int i = 0; array[i] != '\0'; ++i) {
        length++;
    }

    cout << "Length of the array: " << length << endl;

    return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;

    // Input the main string (S) and the substring to find (T)
    cout << "Enter the main string (S): ";
    getline(cin, S);
    cout << "Enter the substring to find (T): ";
    getline(cin, T);

    // Find the position where T begins in S
    size_t position = S.find(T);

    // Output the result
    if (position != string::npos) {
        // T is found in S, so output the position (index) where it begins
        cout << "Substring T begins at position " << position + 1 << " in the main string S." << endl;
    } else {
        // T is not found in S, so output 1
        cout << "Substring T is not found in the main string S. Returning position 1." << endl;
    }

    return 0;
}


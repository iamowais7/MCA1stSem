```#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";

    for (int num = 2; num <= n; ++num) {
        bool isPrime = true;
        
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}


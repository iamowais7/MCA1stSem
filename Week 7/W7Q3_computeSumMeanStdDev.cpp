#include <iostream>
#include <cmath>
using namespace std;

double calculateSum(const double* ptr, int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += *(ptr + i);
    }
    return sum;
}

double calculateMean(double sum, int n) {
    return sum / n;
}

double calculateStandardDeviation(const double* ptr, double mean, int n) {
    double variance = 0;
    for (int i = 0; i < n; ++i) {
        variance += pow((*(ptr + i) - mean), 2);
    }
    return sqrt(variance / n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double numbers[n];
    cout << "Enter " << n << " real numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    double sum = calculateSum(numbers, n);
    double mean = calculateMean(sum, n);
    double standardDeviation = calculateStandardDeviation(numbers, mean, n);

    cout << "Sum of elements: " << sum << endl;
    cout << "Mean of elements: " << mean << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;

    return 0;
}


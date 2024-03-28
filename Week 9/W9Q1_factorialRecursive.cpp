#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * fact(n - 1); 
    }
}

int main() {
    int n;
    printf("Enter the positive number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid Input");
    } else {
        int factorial = fact(n);
        printf("Factorial (recursion): %d\n", factorial);
    }

    return 0;
}


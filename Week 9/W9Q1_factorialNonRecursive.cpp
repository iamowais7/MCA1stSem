#include <stdio.h>

int factorial(int n) {
    int fact = 1;                          
    for (int i = 1; i <= n; ++i) {
        fact *= i; 
    }
    return fact;
}
int main() {
    int num;
    printf("Enter positive number");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid Input ");
    } else {
        int final = factorial(num);
        printf("Factorial (without Recursion): %d\n", final);
    }

    return 0;
}


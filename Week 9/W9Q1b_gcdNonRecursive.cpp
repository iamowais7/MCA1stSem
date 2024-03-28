#include <stdio.h>

int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    int final = gcd(a,b);
    printf("GCD (without Recursion): %d\n", final);

    return 0;
}


#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;
    printf("Enter two positive numbers ");
    scanf("%d %d", &num1, &num2);

    int final = gcd(num1, num2);
    printf("GCD (recursion):  %d\n", final);

    return 0;
}


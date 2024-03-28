
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = a;

    for (int i = 1; i <= b; ++i) {
        sum = sum + 1;
    }

    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}


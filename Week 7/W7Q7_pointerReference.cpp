#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    // Member function to set the number using the this pointer and return a reference to the object
    Number& setNumber(int n) {
        this->num = n;
        return *this;
    }

    // Member function to display the number
    void displayNumber() {
        cout << "Number: " << num << endl;
    }
};

int main() {
    Number numObj(42);

    cout << "Original Number:" << endl;
    numObj.displayNumber();

    // Setting a new number using the member function and this pointer
    numObj.setNumber(100).setNumber(200);

    cout << "Updated Number:" << endl;
    numObj.displayNumber();

    return 0;
}


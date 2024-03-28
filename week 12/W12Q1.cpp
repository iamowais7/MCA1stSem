#include <iostream>
using namespace std;

class MyClass
{
private:
    int num1;
    int num2;

public:
    MyClass()
    {
        num1;
        num2;
    }

    void setValues(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayValues()
    {
        cout << "Value of num1: " << num1 << endl;
        cout << "Value of num2: " << num2 << endl;
    }
};

int main()
{
    MyClass obj;
    int input1, input2;

    cout << "Enter value for num1: ";
    cin >> input1;

    cout << "Enter value for num2: ";
    cin >> input2;

    obj.setValues(input1, input2);
    obj.displayValues();

    return 0;
}

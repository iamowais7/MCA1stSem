#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }

    double hypo()
    {
        return sqrt(base * base + height * height);
    }

    double area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    int b, h;

    cout << "Enter base: ";
    cin >> b;

    cout << "Enter height: ";
    cin >> h;

    Triangle myTriangle(b, h);

    cout << "Hypotenuse: " << myTriangle.hypo() << endl;
    cout << "Area: " << myTriangle.area() << endl;

    return 0;
}


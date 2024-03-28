#include <iostream>
#include <string>
using namespace std;

class pntr_obj {
private:
    int roll_no;
    string name;

public:
    void set_data(int roll, const string& student_name) {
        roll_no = roll;
        name = student_name;
    }

    void print() {
        cout << "Object with Roll Number " << this->roll_no << " and Name " << this->name << " has invoked the print() function." << endl;
    }
};

int main() {
    pntr_obj obj1, obj2, obj3; // Creating three objects of pntr_obj class

    // Setting data for objects using set_data() function
    obj1.set_data(101, "Alice");
    obj2.set_data(102, "Bob");
    obj3.set_data(103, "Charlie");

    // Printing which object has invoked the print() function
    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}


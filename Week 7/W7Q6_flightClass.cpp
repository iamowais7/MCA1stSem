#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flight_no;
    string source;
    string destination;
    double fare;

public:
    void setFlightInfo(int num, const string& src, const string& dest, double flightFare) {
        flight_no = num;
        source = src;
        destination = dest;
        fare = flightFare;
    }

    void displayInfo() {
        cout << "Flight Number: " << this->flight_no << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: $" << this->fare << endl;
    }
};

int main() {
    Flight flight1;

    // Setting flight information using setFlightInfo() function
    flight1.setFlightInfo(101, "New York", "London", 1000.50);

    // Displaying flight information using displayInfo() function and this pointer
    cout << "Flight Information:" << endl;
    flight1.displayInfo();

    return 0;
}


#include <iostream>
using namespace std;

class Vehicle {
string brand;
string model;
int year;
public:
    void initialize(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void startEngine() {
        cout << "The " << brand << " " << model << "'s engine is started." << endl;
    }

    
};

int main() {
    Vehicle myVehicle;
    myVehicle.initialize("Toyota", "Camry", 2022);

    myVehicle.startEngine();

    return 0;
}

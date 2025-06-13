#include <iostream>
#include <string>

using namespace std; // Using the namespace std

class Car {
private:
    string brand;  // Private attribute
    string model;  // Private attribute
    int year;      // Private attribute

public:
    // Constructor
    Car(string carBrand, string carModel, int carYear) {
        brand = carBrand;
        model = carModel;
        year = carYear;
    }

    // Public method to display car information
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    // Public method to update the private attribute year
    void updateYear(int newYear) {
        year = newYear;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar("Toyota", "Corolla", 2020);

    // Use public methods to interact with private attributes
    myCar.displayInfo();

    // Update the year using the public method
    myCar.updateYear(2023);
    cout << "\nAfter updating the year:\n";
    myCar.displayInfo();

    return 0;
}
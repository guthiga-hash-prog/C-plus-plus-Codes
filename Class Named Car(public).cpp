#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;

    Car(string br, string mo, float pr, int mi) : brand(br), model(mo), price(pr), mileage(mi) {}

    void display() {
        cout << "Brand: " << brand << "\nModel: " << model << "\nPrice: $" << price << "\nMileage: " << mileage << " miles" << endl;
    }

    void drive(int distance) {
        mileage += distance;
        cout << "Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 20000, 5000);

    myCar.display();

    myCar.drive(150);
    myCar.drive(300);

    return 0;
}

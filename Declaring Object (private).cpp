#include <iostream>
#include <cmath>
using namespace std;

class Cylinder {
private:
    const double pi = 3.142;
    double radius;
    double height;

public:
    // Constructor to initialize radius and height
    Cylinder(double r, double h) : radius(r), height(h) {}

    double calculateSurfaceArea() {
        return 2 * pi * radius * radius + 2 * pi * radius * height;
    }

    double calculateVolume() {
        return pi * radius * radius * height;
    }
};

int main() {
    // Create a Cylinder object with radius 7 and height 10
    Cylinder myCylinder(7, 10);
    
    // Calculate and display the surface area and volume
    cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << endl;
    cout << "Volume: " << myCylinder.calculateVolume() << endl;

    return 0;
}

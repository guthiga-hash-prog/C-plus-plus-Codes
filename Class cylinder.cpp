 #include <iostream>

using namespace std;

class Cylinder {
public:
    const double pi = 3.142;
    double radius = 7;
    double height = 10;

    double calculateSurfaceArea() {
        return 2 * pi * radius * radius + 2 * pi * radius * height;
    }

    double calculateVolume() {
        return pi * radius * radius * height;
    }
};

int main() {
    Cylinder myCylinder;
    cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << endl;
    cout << "Volume: " << myCylinder.calculateVolume() << endl;
    return 0;
}
	
	
	
	
	
	
	
	

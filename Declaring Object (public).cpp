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
	Cylinder c1,c2;
	c1.height=10;
	c1.radius=7;
	double Volume , Surfacearea;
	Volume=c1.calculateSurfaceArea();
	Surfacearea=c1.calculateSurfaceArea();
	cout<<"Volume :"<<Volume<<endl;
	cout<<"Surfacearea :"<<Surfacearea<<endl;
	
return 0;
}
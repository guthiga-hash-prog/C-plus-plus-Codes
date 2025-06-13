#include<iostream>
using namespace std;

class BTspeaker{
	public:
		
	const double pi=3.142;
	double radius=7;
	 
	 double calculatecircumfrence(){
	 	return 2 * pi * radius;
	 }
	
};

int main() {
	BTspeaker myBTspeaker;
	cout<<"circumfrence:"<<myBTspeaker.calculatecircumfrence()<<endl;
	
	
	
	
	return 0;
}
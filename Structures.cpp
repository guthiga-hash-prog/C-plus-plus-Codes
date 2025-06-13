#include <iostream>
using namespace std;

struct Patient {
    string name;
    int Age;
    string Diagnosis;
    int Age;
    float GPA;
};

	

int main() {
    student s1 = {"Morgan", 123, "morganguthiga@gmail.com", 2005, 9.8};
    student s2 = {"Godfrey", 456, "godfrey@gmail.com", 2006, 8.8};
    
    cout << "Memory" << endl;
    cout << "String Size: " << sizeof(string) << endl;
    cout << "Int size: " << sizeof(int) << endl;
    cout << "Float size: " << sizeof(float) << endl;
    cout << "Struct student size: " << sizeof(student) << endl;
    
    cout << endl;
    
    cout << "Addresses" << endl;
    cout << "Name: " << &s1.name << endl;
    cout << "Email address: " << &s1.email << endl;
    cout << "Date of Birth: " << &s1.DOB << endl;
    cout << "GPA: " << &s1.GPA << endl;
    
    cout << endl;
    
    cout << "Addresses" << endl;
    cout << "Name: " << &s2.name << endl;
    cout << "Email address: " << &s2.email << endl;
    cout << "Date of Birth: " << &s2.DOB << endl;
    cout << "GPA: " << &s2.GPA << endl;
    
    cout << endl;
    
    cout << "Student 1" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Email address: " << s1.email << endl;
    cout << "Date of Birth: " << s1.DOB << endl;
    cout << "GPA: " << s1.GPA << endl;
    
    cout << endl;
    
    cout << "Student 2" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Email address: " << s2.email << endl;
    cout << "Date of Birth: " << s2.DOB << endl;
    cout << "GPA: " << s2.GPA << endl;

    return 0;
}

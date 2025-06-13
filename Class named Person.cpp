#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived class LibraryMember (inherits from Person)
class LibraryMember : public Person {
protected:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books) {
        name = n;
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived class PremiumMember (inherits from LibraryMember)
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee) : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

// Main function
int main() {
PremiumMember member1("Morgan", 12345, 5, 50.00);

    cout << "Name: " << member1.getName() << endl;
    cout << "Member ID: " << member1.getMemberID() << endl;
    cout << "Books Borrowed: " << member1.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << member1.getMembershipFee() << endl;

    return 0;
}

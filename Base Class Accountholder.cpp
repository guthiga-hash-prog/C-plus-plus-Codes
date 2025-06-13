#include <iostream>
#include <string>

using namespace std;

class AccountHolder {
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

class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(string n, int accNum, double bal) : AccountHolder() {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }
    int getAccountNumber() {
        return accountNumber;
    }
    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(string n, int accNum, double bal, double intRate) : BankAccount(n, accNum, bal) {
        interestRate = intRate;
    }
    double getInterestRate() {
        return interestRate;
    }
};

int main() {
    SavingsAccount sa("John Doe", 12345, 1000.0, 0.05);
    cout << "Account Holder: " << sa.getName() << endl;
    cout << "Account Number: " << sa.getAccountNumber() << endl;
    cout << "Balance: " << sa.getBalance() << endl;
    cout << "Interest Rate: " << sa.getInterestRate() << endl;
    return 0;
}

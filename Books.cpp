#include <iostream>
using namespace std;

int main() {
    string bookID;
    int dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    // Input from the user
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (in days): ";
    cin >> dueDate;
    cout << "Enter Return Date (in days): ";
    cin >> returnDate;

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate and fine amount using if...else
    if (daysOverdue > 0 && daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue > 7 && daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue > 14) {
        fineRate = 100;
    } else {
        fineRate = 0; // No fine if not overdue
        daysOverdue = 0;
    }

    fineAmount = fineRate * daysOverdue;

    // Display the required information
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine Rate: " << fineRate << " Ksh/day" << endl;
    cout << "Fine Amount: " << fineAmount << " Ksh" << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

// Function to convert a string date to time_t
time_t stringToTime(const string &date) {
    struct tm tm = {0};
    stringstream ss(date);
    ss >> get_time(&tm, "%Y-%m-%d");
    return mktime(&tm);
}

// Function to calculate the number of days between two dates
int calculateDaysOverdue(const string& dueDate, const string& returnDate) {
    time_t dueTime = stringToTime(dueDate);
    time_t returnTime = stringToTime(returnDate);
    return difftime(returnTime, dueTime) / (60 * 60 * 24);
}

// Function to calculate the fine based on the days overdue
int calculateFine(int daysOverdue) {
    int fine = 0;
    if (daysOverdue <= 7) {
        fine = daysOverdue * 20;
    } else if (daysOverdue <= 14) {
        fine = 7 * 20 + (daysOverdue - 7) * 50;
    } else {
        fine = 7 * 20 + 7 * 50 + (daysOverdue - 14) * 100;
    }
    return fine;
}

int main() {
    string bookID, dueDate, returnDate;

    cout << "Enter book ID: ";
    cin >> bookID;
    cout << "Enter due date (YYYY-MM-DD): ";
    cin >> dueDate;
    cout << "Enter return date (YYYY-MM-DD): ";
    cin >> returnDate;

    int daysOverdue = calculateDaysOverdue(dueDate, returnDate);
    int fineAmount = calculateFine(daysOverdue);

    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine Rate: Ksh " << (daysOverdue <= 7 ? 20 : (daysOverdue <= 14 ? 50 : 100)) << " per day" << endl;
    cout << "Fine Amount: Ksh " << fineAmount << endl;

    return 0;
}
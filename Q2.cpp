//1
#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    int month, day, year;
    cout << "Enter your first name and last name: ";
    cin >> firstName >> lastName;
    cout << "Enter today's date (month day year): ";
    cin >> month >> day >> year;

    cout << lastName << ", " << firstName << " " << month << ":" << day << ":" << year;
    return 0;
}



//2
#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    int month, day, year;
    cout << "Enter your first name and last name: ";
    cin >> firstName >> lastName;
    cout << "Enter today's date (month day year): ";
    cin >> month >> day >> year;

    cout << lastName << ", " << firstName << endl; // Added endl for space
    cout << month << ":" << day << ":" << year;
    return 0;
}



//3
#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    int month, day, year;
    cout << "Enter your first name and last name: ";
    cin >> firstName >> lastName;
    cout << "Enter today's date (month day year): ";
    cin >> month >> day >> year;

    cout << firstName << " " << lastName << endl; // Changed the order and used a blank space
    cout << month << ":" << day << ":" << year;
    return 0;
}

//1
#include <iostream>
using std::cout;
using std::string;

const string FULL_NAME = "Ronish Shrestha"; // Replace with your actual name

int main(void) {
    cout << "Full Name: " << FULL_NAME << '\n';
    cout << "Length of the Full Name: " << FULL_NAME.length() << '\n';
    cout << "Size of the Full Name: " << FULL_NAME.size() << '\n';
    return 0;
}



//2
#include <iostream>
using std::cout;
using std::string;

const string FULL_NAME = "Ronish Shrestha"; // Replace with your actual name

int main(void) {
    // Assuming a single space between first and last names
    size_t spaceIndex = FULL_NAME.find(' ');
    string lastName = FULL_NAME.substr(spaceIndex + 1);
    string firstName = FULL_NAME.substr(0, spaceIndex);

    cout << "Formatted Name: " << lastName << ", " << firstName << '\n';
    return 0;
}



//3
#include <iostream>
using std::cout;
using std::string;

const string FULL_NAME = "Ronish Shrestha"; // Replace with your actual name

int main(void) {
    // Assuming a single space between first and last names
    size_t spaceIndex = FULL_NAME.find(' ');
    string lastName = FULL_NAME.substr(spaceIndex + 1);
    char firstInitial = FULL_NAME[0];

    cout << "Formatted Name: " << lastName << ", " << firstInitial << ".\n";
    return 0;
}

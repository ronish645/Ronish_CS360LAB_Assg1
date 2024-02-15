//1
#include <iostream>
#include <iomanip>

using std::cout;
using std::right;
using std::setw;

const int NUM1 = 1066;
const int NUM2 = 1492;
const int NUM3 = 512;
const int NUM4 = 1;
const int NUM5 = -23;

int main(void) {
    cout << std::fixed << std::showpoint;

    // Assuming we want to right-justify within a field width of 10 characters
    int fieldWidth = 10;

    cout << right << setw(fieldWidth) << NUM1 << '\n';
    cout << right << setw(fieldWidth) << NUM2 << '\n';
    cout << right << setw(fieldWidth) << NUM3 << '\n';
    cout << right << setw(fieldWidth) << NUM4 << '\n';
    cout << right << setw(fieldWidth) << NUM5 << '\n';

    return 0;
}





//2
#include <iostream>
#include <iomanip>

using std::cout;
using std::right;
using std::setw;
using std::fixed;
using std::setprecision;

const int NUM1 = 1066;
const int NUM2 = 1492;
const int NUM3 = 512;
const int NUM4 = 1;
const int NUM5 = -23;

int main(void) {
    cout << fixed << std::showpoint;

    // Calculating the sum of the first two values and the sum of the last three values
    double sumFirstTwo = NUM1 + NUM2;
    double sumLastThree = NUM3 + NUM4 + NUM5;

    // Calculating the result and storing it in answer
    double answer = sumFirstTwo / sumLastThree;

    // Set field width for right justification
    int fieldWidth = 10;

    // Print numbers right-justified in a column
    cout << right << setw(fieldWidth) << NUM1 << '\n';
    cout << right << setw(fieldWidth) << NUM2 << '\n';
    cout << right << setw(fieldWidth) << NUM3 << '\n';
    cout << right << setw(fieldWidth) << NUM4 << '\n';
    cout << right << setw(fieldWidth) << NUM5 << '\n';

    // Printing the answer to four decimal places
    cout << "The answer is " << setprecision(4) << answer << '\n';

    return 0;
}






//3
#include <iostream>
#include <iomanip>

using std::cout;
using std::right;
using std::setw;
using std::fixed;
using std::setprecision;

const double NUM1 = 23.62;
const double NUM2 = 46.0;
const double NUM3 = 43.4443;
const double NUM4 = 100.1;
const double NUM5 = 98.98;

int main(void) {
    cout << fixed << std::showpoint;

    // Assuming we want a field width that can accommodate the largest number plus the decimal point and two decimal places
    int fieldWidth = 10;

    // Set the precision to two decimal places for floating-point numbers
    cout << setprecision(2);

    // Print numbers right-justified in a column with two decimal places
    cout << right << setw(fieldWidth) << NUM1 << '\n';
    cout << right << setw(fieldWidth) << NUM2 << '\n';
    cout << right << setw(fieldWidth) << NUM3 << '\n';
    cout << right << setw(fieldWidth) << NUM4 << '\n';
    cout << right << setw(fieldWidth) << NUM5 << '\n';

    return 0;
}




//4
#include <iostream>
#include <iomanip>

using std::cout;
using std::right;
using std::setw;
using std::fixed;
using std::setprecision;

const double NUM1 = 23.62;
const double NUM2 = 46.0;
const double NUM3 = 43.4443;
const double NUM4 = 100.1;
const double NUM5 = 98.98;

int main(void) {
    cout << fixed << std::showpoint;

    // Calculate the sum of the numbers
    double sum = NUM1 + NUM2 + NUM3 + NUM4 + NUM5;

    // Set the precision to two decimal places for floating-point numbers
    cout << setprecision(2);

    // Print numbers right-justified in a column with two decimal places
    int fieldWidth = 10; // Field width for the numbers
    cout << right << setw(fieldWidth) << NUM1 << '\n';
    cout << right << setw(fieldWidth) << NUM2 << '\n';
    cout << right << setw(fieldWidth) << NUM3 << '\n';
    cout << right << setw(fieldWidth) << NUM4 << '\n';
    cout << right << setw(fieldWidth) << NUM5 << '\n';

    // Print the sum of the numbers
    cout << "\nThe sum of the numbers is " << right << setw(fieldWidth) << sum << '\n';

    return 0;
}

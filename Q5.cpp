// 1
#include <iostream>
#include <string>

int main() {
    std::string greeting = "Good Morning";
    std::string name = "Sarah";
    std::string exclamation = "Sunshine!";

    // Manually calculate the padding for each string
    int paddingGreeting = (20 - greeting.length()) / 2;
    int paddingName = (20 - name.length()) / 2;
    int paddingExclamation = (20 - exclamation.length()) / 2;

    // Print the strings with manual padding
    std::cout << std::string(paddingGreeting, ' ') << greeting
              << std::string(paddingName, ' ') << name
              << std::string(paddingExclamation, ' ') << exclamation;

    return 0;
}



//2
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(20) << std::right << "Good Morning"
              << std::setw(20) << std::right << "Sarah"
              << std::setw(20) << std::right << "Sunshine!";

    return 0;
}




//3
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(20) << std::right << "Good Morning" << "\n\n"
              << std::setw(20) << std::right << "Sarah" << "\n\n"
              << std::setw(20) << std::right << "Sunshine!" << "\n";

    return 0;
}

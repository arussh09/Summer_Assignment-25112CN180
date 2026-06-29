#include <iostream>
#include <string>

int main() {
    int age;
    char citizen;

    std::clog << "=== Voting Eligibility System ===\n";
    
    std::clog << "Enter your age: ";
    if (!(std::cin >> age)) {
        std::clog << "Invalid age input.\n";
        return 1;
    }

    std::clog << "Are you a registered citizen? (y/n): ";
    std::cin >> citizen;

    // Check conditions for eligibility
    if (age >= 18 && (citizen == 'y' || citizen == 'Y')) {
        std::clog << "\nStatus: ELIGIBLE TO VOTE.\n";
    } else {
        std::clog << "\nStatus: NOT ELIGIBLE TO VOTE.\n";
        if (age < 18) {
            std::clog << "- You must be at least 18 years old.\n";
        }
        if (citizen != 'y' && citizen != 'Y') {
            std::clog << "- You must be a registered citizen.\n";
        }
    }

    return 0;
}
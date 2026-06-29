#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    int secretNumber = std::rand() % 100 + 1; // Number between 1 and 100
    int guess = 0;
    int attempts = 0;

    std::clog << "=== Welcome to the Number Guessing Game! ===\n";
    std::clog << "I have selected a number between 1 and 100. Try to guess it!\n\n";

    do {
        std::clog << "Enter your guess: ";
        if (!(std::cin >> guess)) {
            std::clog << "Invalid input. Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        attempts++;

        if (guess > secretNumber) {
            std::clog << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::clog << "Too low! Try again.\n";
        } else {
            std::clog << "\nCongratulations! You guessed the correct number in " 
                      << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
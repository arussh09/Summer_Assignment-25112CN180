#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;
    
    char result = '\0'; // Variable to hold the answer
    
    for (int i = 0; i < text.length(); i++) {
        char current = text[i];
        int count = 0;
        
        // Count how many times 'current' appears in the whole string
        for (int j = 0; j < text.length(); j++) {
            if (text[j] == current) {
                count++;
            }
        }
        
        // If it only appears 1 time, it's our first non-repeating character
        if (count == 1) {
            result = current;
            break; // Stop immediately since we want the *first* one
        }
    }
    
    if (result != '\0') {
        std::cout << "First non-repeating character is: " << result << "\n";
    } else {
        std::cout << "All characters repeat or string is empty.\n";
    }
    
    return 0;
}
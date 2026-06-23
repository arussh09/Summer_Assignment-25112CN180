#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;
    
    char result = '\0';
    
    for (int i = 0; i < text.length(); i++) {
        char current = text[i];
        int count = 0;
        
        for (int j = 0; j < text.length(); j++) {
            if (text[j] == current) {
                count++;
            }
        }
        
        // If it appears more than once, we found our first duplicate
        if (count > 1) {
            result = current;
            break; // Stop searching
        }
    }
    
    if (result != '\0') {
        std::cout << "First repeating character is: " << result << "\n";
    } else {
        std::cout << "No repeating characters found.\n";
    }
    
    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    
    std::string counted = ""; // Keeps track of unique characters we've already processed

    std::cout << "\nCharacter Frequencies:\n";

    // Loop through each character of the input string
    for (int i = 0; i < text.length(); i++) {
        char current_char = text[i];

        // Check if we have already counted this character
        // (std::string::npos means the character was NOT found in the 'counted' string)
        if (counted.find(current_char) == std::string::npos) {
            
            int count = 0;
            // Loop through the string again to count occurrences of current_char
            for (int j = 0; j < text.length(); j++) {
                if (text[j] == current_char) {
                    count++;
                }
            }

            // Print the result for this character
            std::cout << "'" << current_char << "' : " << count << "\n";

            // Add it to our 'counted' string so we don't print it again
            counted += current_char;
        }
    }

    return 0;
}
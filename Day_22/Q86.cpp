#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    int count = 0;
    
    // Extract words separated by whitespace
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence); // Handles spaces
    
    std::cout << "Word count: " << countWords(sentence) << "\n";
    
    return 0;
}
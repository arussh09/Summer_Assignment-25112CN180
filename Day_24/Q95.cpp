#include <iostream>
#include <string>
#include <sstream>

std::string findLongestWord(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word, longestWord = "";

    while (ss >> word) {
        // Clean punctuation if needed, or simply compare by length
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    return longestWord;
}

int main() {
    std::string sentence = "C++ is a powerful general-purpose programming language";
    std::clog << "Longest word: " << findLongestWord(sentence) << "\n";
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"programming", "C++", "code", "developer", "AI"};

    // Sort using a lambda function that compares lengths
    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });

    std::clog << "Words sorted by length:\n";
    for (const auto& word : words) {
        std::clog << word << " (Length: " << word.length() << ")\n";
    }

    return 0;
}
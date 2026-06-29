#include <iostream>
#include <string>
#include <unordered_set>

std::string removeDuplicates(const std::string& str) {
    std::unordered_set<char> seen;
    std::string result = "";

    for (char ch : str) {
        // If the character hasn't been seen yet, add it to result and set
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}

int main() {
    std::string text = "programming language";
    std::clog << "Original: " << text << "\n";
    std::clog << "Without duplicates: " << removeDuplicates(text) << "\n";
    return 0;
}
#include <iostream>
#include <string>

std::string compressString(const std::string& str) {
    if (str.empty()) return "";

    std::string compressed = "";
    int count = 1;

    for (size_t i = 0; i < str.length(); ++i) {
        // If the next character is the same, increment the count
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            // Append character and its count
            compressed += str[i] + std::to_string(count);
            count = 1; // Reset count
        }
    }

    // Return the compressed string only if it is shorter than the original
    return compressed.length() < str.length() ? compressed : str;
}

int main() {
    std::string text = "aabcccccaaa";
    std::clog << "Original: " << text << "\n";
    std::clog << "Compressed: " << compressString(text) << "\n";
    return 0;
}
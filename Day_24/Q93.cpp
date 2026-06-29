#include <iostream>
#include <string>

bool isRotation(const std::string& s1, const std::string& s2) {
    // If lengths are not equal, they cannot be rotations
    if (s1.length() != s2.length()) {
        return false;
    }
    
    // Concatenate s1 with itself
    std::string temp = s1 + s1;
    
    // Check if s2 is a substring of temp
    return (temp.find(s2) != std::string::npos);
}

int main() {
    std::string s1 = "waterbottle";
    std::string s2 = "erbottlewat";

    if (isRotation(s1, s2)) {
        std::clog << "\"" << s2 << "\" is a rotation of \"" << s1 << "\"\n";
    } else {
        std::clog << "\"" << s2 << "\" is NOT a rotation of \"" << s1 << "\"\n";
    }
    return 0;
}
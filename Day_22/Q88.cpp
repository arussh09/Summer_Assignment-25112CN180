#include <iostream>
#include <string>
#include <algorithm>

void removeSpaces(std::string& str) {
    // std::remove shifts all non-space characters to the front
    // str.erase chops off the leftover garbage characters at the end
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}

int main() {
    std::string text;
    std::cout << "Enter a string with spaces: ";
    std::getline(std::cin, text);
    
    removeSpaces(text);
    
    std::cout << "Modified string: " << text << "\n";
    
    return 0;
}
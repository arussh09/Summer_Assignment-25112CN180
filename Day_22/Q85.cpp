#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;
    
    if (isPalindrome(text)) {
        std::cout << "\"" << text << "\" is a palindrome.\n";
    } else {
        std::cout << "\"" << text << "\" is not a palindrome.\n";
    }
    
    return 0;
}
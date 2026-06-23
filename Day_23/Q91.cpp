#include <iostream>
#include <string>
#include <algorithm> // Needed for std::sort

bool isAnagram(std::string str1, std::string str2) {
    // If lengths are different, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }
    
    // Sort both strings alphabetically
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    
    // If they match after sorting, they are anagrams
    return str1 == str2;
}

int main() {
    std::string word1, word2;
    std::cout << "Enter first string: ";
    std::cin >> word1;
    std::cout << "Enter second string: ";
    std::cin >> word2;
    
    if (isAnagram(word1, word2)) {
        std::cout << "The strings are anagrams.\n";
    } else {
        std::cout << "The strings are NOT anagrams.\n";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> commonChars(const std::vector<std::string>& words) {
    // Vector to store the minimum frequency of each character across all words
    std::vector<int> minFreq(26, 100000); // Initialize with a large number

    for (const std::string& word : words) {
        std::vector<int> charFreq(26, 0);
        for (char ch : word) {
            charFreq[ch - 'a']++;
        }
        
        // Update the global minimum frequencies
        for (int i = 0; i < 26; ++i) {
            minFreq[i] = std::min(minFreq[i], charFreq[i]);
        }
    }

    // Collect the results based on frequencies
    std::vector<std::string> result;
    for (int i = 0; i < 26; ++i) {
        while (minFreq[i] > 0) {
            result.push_back(std::string(1, 'a' + i));
            minFreq[i]--;
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"bella", "label", "roller"};
    std::vector<std::string> common = commonChars(words);

    std::clog << "Common characters: ";
    for (const std::string& str : common) {
        std::clog << str << " ";
    }
    std::clog << "\n";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void maxOccurringChar(string str) {
    int freq[256] = {0};

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    // Find maximum occurring character
    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] > maxFreq) {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq << endl;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    maxOccurringChar(str);

    return 0;
}
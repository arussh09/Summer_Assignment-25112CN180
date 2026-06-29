#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Zara", "Alice", "Bob", "Charlie", "David"};

    // Sort the vector alphabetically
    std::sort(names.begin(), names.end());

    std::clog << "Names sorted alphabetically:\n";
    for (const auto& name : names) {
        std::clog << name << "\n";
    }

    return 0;
}
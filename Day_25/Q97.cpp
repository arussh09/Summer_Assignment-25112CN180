#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> merged;
    size_t i = 0, j = 0;

    // Traverse both arrays and push the smaller element
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Store remaining elements of first array
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    // Store remaining elements of second array
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7};
    std::vector<int> arr2 = {2, 4, 6, 8, 10};

    std::vector<int> result = mergeSortedArrays(arr1, arr2);

    std::clog << "Merged Array: ";
    for (int val : result) {
        std::clog << val << " ";
    }
    std::clog << "\n";

    return 0;
}
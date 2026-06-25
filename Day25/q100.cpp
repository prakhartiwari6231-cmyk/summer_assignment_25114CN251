// wap to sort words by length

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool compareLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}

int main() {
    std::vector<std::string> words = {"elephant", "cat", "banana", "dog", "apple"};

    std::sort(words.begin(), words.end(), compareLength);

    std::cout << "Sorted words by length:" << std::endl;
    for (const std::string& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}
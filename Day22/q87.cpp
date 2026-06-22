// wap to character frequency

#include <iostream>
#include <string>
#include <map>

int main() {
    std::string text = "hello world";
    std::map<char, int> frequency;

    for (char ch : text) {
        frequency[ch]++;
    }

    std::cout << "Character Frequencies:\n";
    for (auto const& pair : frequency) {
    
        if (pair.first == ' ') {
            std::cout << "[space] : " << pair.second << "\n";
        } else {
            std::cout << "'" << pair.first << "' : " << pair.second << "\n";
        }
    }

    return 0;
}
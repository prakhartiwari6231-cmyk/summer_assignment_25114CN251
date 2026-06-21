// wap to count vowels and consonants

#include <iostream>
#include <string>
#include <cctype> 
int main() {
    std::string text = "Hello, World! 2026";
    int vowels = 0;
    int consonants = 0;
    for (char c : text) {
        c = std::tolower(c);
        if (std::isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    std::cout << "Original Text: " << text << std::endl;
    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << consonants << std::endl;
    return 0;
}
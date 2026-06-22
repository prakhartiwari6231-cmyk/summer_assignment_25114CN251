// wap to check palindrome string 

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "radar";

    bool isPalindrome = std::equal(text.begin(), text.begin() + text.size() / 2, text.rbegin());

    if (isPalindrome) {
        std::cout << "\"" << text << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << text << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
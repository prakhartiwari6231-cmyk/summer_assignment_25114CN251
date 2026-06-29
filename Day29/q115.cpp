// wap to create menu driven string operations system

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int choice;
    std::string str1, str2;

    while (true) {
        std::cout << "\n--- String Operations System ---" << std::endl;
        std::cout << "1. Find Length of a String" << std::endl;
        std::cout << "2. Concatenate Two Strings" << std::endl;
        std::cout << "3. Reverse a String" << std::endl;
        std::cout << "4. Compare Two Strings" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 5) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter a string: ";
                std::getline(std::cin, str1);
                std::cout << "Length of the string is: " << str1.length() << " characters" << std::endl;
                break;

            case 2:
                std::cout << "Enter first string: ";
                std::getline(std::cin, str1);
                std::cout << "Enter second string: ";
                std::getline(std::cin, str2);
                std::cout << "Concatenated string: " << str1 + str2 << std::endl;
                break;

            case 3:
                std::cout << "Enter a string to reverse: ";
                std::getline(std::cin, str1);
                std::reverse(str1.begin(), str1.end());
                std::cout << "Reversed string: " << str1 << std::endl;
                break;

            case 4:
                std::cout << "Enter first string: ";
                std::getline(std::cin, str1);
                std::cout << "Enter second string: ";
                std::getline(std::cin, str2);
                if (str1 == str2) {
                    std::cout << "Both strings are equal." << std::endl;
                } else if (str1 > str2) {
                    std::cout << "First string is lexicographically greater than second string." << std::endl;
                } else {
                    std::cout << "Second string is lexicographically greater than first string." << std::endl;
                }
                break;

            default:
                std::cout << "Invalid choice! Please select a valid option." << std::endl;
                break;
        }
    }

    return 0;
}
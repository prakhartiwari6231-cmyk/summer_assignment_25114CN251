// wap to create voting eligibility system

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string name;
    int age;
    std::string citizenship;

    std::cout << "--- Voting Eligibility System ---" << std::endl;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Are you a citizen of this country? (yes/no): ";
    std::cin >> citizenship;

    std::transform(citizenship.begin(), citizenship.end(), citizenship.begin(), ::tolower);

    std::cout << "\nHello, " << name << "." << std::endl;

    if (age >= 18 && citizenship == "yes") {
        std::cout << "Status: ELIGIBLE TO VOTE" << std::endl;
        std::cout << "Please ensure you are registered in the voter rolls." << std::endl;
    } else {
        std::cout << "Status: NOT ELIGIBLE TO VOTE" << std::endl;
        std::cout << "Reason(s): ";
        
        if (age < 18 && citizenship != "yes") {
            std::cout << "Underage and non-citizen." << std::endl;
        } else if (age < 18) {
            std::cout << "You must be at least 18 years old." << std::endl;
        } else {
            std::cout << "Citizenship is required to vote." << std::endl;
        }
    }

    return 0;
}
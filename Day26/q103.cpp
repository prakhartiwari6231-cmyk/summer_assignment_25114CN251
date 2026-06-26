// wap to create ATM simulation 

#include <iostream>
#include <iomanip>

void displayMenu() {
    std::cout << "\n--- ATM Menu ---" << std::endl;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit Money" << std::endl;
    std::cout << "3. Withdraw Money" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    int pin = 1234;
    int enteredPin;
    double balance = 5000.00;
    int choice;
    double amount;

    std::cout << "--- Welcome to the ATM System ---" << std::endl;
    std::cout << "Enter your 4-digit PIN: ";
    std::cin >> enteredPin;

    if (enteredPin != pin) {
        std::cout << "Incorrect PIN. Access Denied!" << std::endl;
        return 0;
    }

    std::cout << std::fixed << std::setprecision(2);

    while (true) {
        displayMenu();
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\nYour current balance is: $" << balance << std::endl;
        } 
        else if (choice == 2) {
            std::cout << "\nEnter amount to deposit: $";
            std::cin >> amount;
            
            if (amount > 0) {
                balance += amount;
                std::cout << "$" << amount << " deposited successfully." << std::endl;
            } else {
                std::cout << "Invalid deposit amount!" << std::endl;
            }
        } 
        else if (choice == 3) {
            std::cout << "\nEnter amount to withdraw: $";
            std::cin >> amount;
            
            if (amount > balance) {
                std::cout << "Insufficient balance!" << std::endl;
            } else if (amount <= 0) {
                std::cout << "Invalid withdrawal amount!" << std::endl;
            } else {
                balance -= amount;
                std::cout << "$" << amount << " withdrawn successfully." << std::endl;
            }
        } 
        else if (choice == 4) {
            std::cout << "\nThank you for using our ATM. Goodbye!" << std::endl;
            break;
        } 
        else {
            std::cout << "Invalid choice! Please select a valid option." << std::endl;
        }
    }

    return 0;
}
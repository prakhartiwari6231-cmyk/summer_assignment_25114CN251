// wap to create bank account system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct BankAccount {
    int accountNumber;
    std::string name;
    double balance;
};

void createAccount(std::vector<BankAccount>& bank) {
    BankAccount account;
    account.accountNumber = 1000 + bank.size() + 1;
    
    std::cin.ignore();
    std::cout << "Enter Account Holder Name: ";
    std::getline(std::cin, account.name);
    
    std::cout << "Enter Initial Deposit Amount: $";
    std::cin >> account.balance;

    if (account.balance < 0) {
        account.balance = 0;
    }

    bank.push_back(account);
    std::cout << "Account created successfully! Your Account Number is: " << account.accountNumber << std::endl;
}

BankAccount* findAccount(std::vector<BankAccount>& bank, int accNo) {
    for (auto& account : bank) {
        if (account.accountNumber == accNo) {
            return &account;
        }
    }
    return nullptr;
}

void depositMoney(std::vector<BankAccount>& bank) {
    int accNo;
    double amount;
    std::cout << "Enter Account Number: ";
    std::cin >> accNo;

    BankAccount* account = findAccount(bank, accNo);
    if (account == nullptr) {
        std::cout << "Account not found!" << std::endl;
        return;
    }

    std::cout << "Enter Deposit Amount: $";
    std::cin >> amount;

    if (amount > 0) {
        account->balance += amount;
        std::cout << "$" << amount << " deposited successfully. New Balance: $" << account->balance << std::endl;
    } else {
        std::cout << "Invalid deposit amount!" << std::endl;
    }
}

void withdrawMoney(std::vector<BankAccount>& bank) {
    int accNo;
    double amount;
    std::cout << "Enter Account Number: ";
    std::cin >> accNo;

    BankAccount* account = findAccount(bank, accNo);
    if (account == nullptr) {
        std::cout << "Account not found!" << std::endl;
        return;
    }

    std::cout << "Enter Withdrawal Amount: $";
    std::cin >> amount;

    if (amount > account->balance) {
        std::cout << "Insufficient balance!" << std::endl;
    } else if (amount <= 0) {
        std::cout << "Invalid withdrawal amount!" << std::endl;
    } else {
        account->balance -= amount;
        std::cout << "$" << amount << " withdrawn successfully. New Balance: $" << account->balance << std::endl;
    }
}

void transferMoney(std::vector<BankAccount>& bank) {
    int senderAccNo, receiverAccNo;
    double amount;

    std::cout << "Enter Sender Account Number: ";
    std::cin >> senderAccNo;
    BankAccount* sender = findAccount(bank, senderAccNo);

    if (sender == nullptr) {
        std::cout << "Sender account not found!" << std::endl;
        return;
    }

    std::cout << "Enter Receiver Account Number: ";
    std::cin >> receiverAccNo;
    BankAccount;
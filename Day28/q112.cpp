// wap to create contact management system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Contact {
    std::string name;
    std::string phone;
    std::string email;
};

void addContact(std::vector<Contact>& database) {
    Contact person;
    std::cin.ignore();
    std::cout << "Enter Name: ";
    std::getline(std::cin, person.name);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, person.phone);
    std::cout << "Enter Email Address: ";
    std::getline(std::cin, person.email);

    database.push_back(person);
    std::cout << "Contact saved successfully!" << std::endl;
}

void displayContacts(const std::vector<Contact>& database) {
    if (database.empty()) {
        std::cout << "Your contact list is empty." << std::endl;
        return;
    }

    std::cout << "\n================================================================================" << std::endl;
    std::cout << std::left << std::setw(25) << "Name" 
              << std::setw(20) << "Phone Number" 
              << std::setw(30) << "Email" << std::endl;
    std::cout << "================================================================================" << std::endl;

    for (const auto& person : database) {
        std::cout << std::left << std::setw(25) << person.name 
                  << std::setw(20) << person.phone 
                  << std::setw(30) << person.email << std::endl;
    }
    std::cout << "================================================================================" << std::endl;
}

void searchContact(const std::vector<Contact>& database) {
    if (database.empty()) {
        std::cout << "No contacts available to search." << std::endl;
        return;
    }

    std::cin.ignore();
    std::string query;
    std::cout << "Enter Name to search: ";
    std::getline(std::cin, query);

    bool found = false;
    for (const auto& person : database) {
        if (person.name == query) {
            std::cout << "\nContact Found:" << std::endl;
            std::cout << "Name : " << person.name << std::endl;
            std::cout << "Phone: " << person.phone << std::endl;
            std::cout << "Email: " << person.email << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Contact not found!" << std::endl;
    }
}

void deleteContact(std::vector<Contact>& database) {
    if (database.empty()) {
        std::cout << "No contacts available to delete." << std::endl;
        return;
    }

    std::cin.ignore();
    std::string name;
    std::cout << "Enter Name of the contact to delete: ";
    std::getline(std::cin, name);

    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->name == name) {
            database.erase(it);
            std::cout << "Contact deleted successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Contact not found!" << std::endl;
}

int main() {
    std::vector<Contact> database;
    int choice;

    while (true) {
        std::cout << "\n--- Contact Management System ---" << std::endl;
        std::cout << "1. Add New Contact" << std::endl;
        std::cout << "2. Display All Contacts" << std::endl;
        std::cout << "3. Search Contact" << std::endl;
        std::cout << "4. Delete Contact" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            addContact(database);
        } else if (choice == 2) {
            displayContacts(database);
        } else if (choice == 3) {
            searchContact(database);
        } else if (choice == 4) {
            deleteContact(database);
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Invalid choice! Please try again." << std::endl;
        }
    }

    return 0;
}
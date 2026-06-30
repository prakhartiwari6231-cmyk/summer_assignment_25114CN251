// wap to create mini library system

#include <iostream>
#include <string>
#include <iomanip>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool isAvailable;
};

int main() {
    const int MAX_BOOKS = 100;
    Book library[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    while (true) {
        std::cout << "\n--- Mini Library System ---" << std::endl;
        std::cout << "1. Add New Book" << std::endl;
        std::cout << "2. Display All Books" << std::endl;
        std::cout << "3. Issue a Book" << std::endl;
        std::cout << "4. Return a Book" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                if (bookCount >= MAX_BOOKS) {
                    std::cout << "Library storage is full!" << std::endl;
                } else {
                    std::cout << "Enter Book ID: ";
                    std::cin >> library[bookCount].id;
                    std::cin.ignore();
                    std::cout << "Enter Book Title: ";
                    std::getline(std::cin, library[bookCount].title);
                    std::cout << "Enter Author Name: ";
                    std::getline(std::cin, library[bookCount].author);
                    library[bookCount].isAvailable = true;
                    
                    bookCount++;
                    std::cout << "Book added successfully!" << std::endl;
                }
                break;

            case 2:
                if (bookCount == 0) {
                    std::cout << "No books available in the library." << std::endl;
                } else {
                    std::cout << "\n================================================================================" << std::endl;
                    std::cout << std::left;}}}
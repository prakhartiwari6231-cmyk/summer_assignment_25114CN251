// wap to create library management system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool isIssued;
};

void addBook(std::vector<Book>& catalog) {
    Book book;
    std::cout << "Enter Book ID: ";
    std::cin >> book.id;
    std::cin.ignore();
    std::cout << "Enter Book Title: ";
    std::getline(std::cin, book.title);
    std::cout << "Enter Author Name: ";
    std::getline(std::cin, book.author);
    book.isIssued = false;

    catalog.push_back(book);
    std::cout << "Book added successfully!" << std::endl;
}

void displayBooks(const std::vector<Book>& catalog) {
    if (catalog.empty()) {
        std::cout << "The library catalog is empty." << std::endl;
        return;
    }

    std::cout << "\n================================================================================" << std::endl;
    std::cout << std::left << std::setw(10) << "ID" 
              << std::setw(30) << "Title" 
              << std::setw(25) << "Author" 
              << std::setw(15) << "Status" << std::endl;
    std::cout << "================================================================================" << std::endl;

    for (const auto& book : catalog) {
        std::cout << std::left << std::setw(10) << book.id 
                  << std::setw(30) << book.title 
                  << std::setw(25) << book.author 
                  << std::setw(15) << (book.isIssued ? "Issued" : "Available") << std::endl;
    }
    std::cout << "================================================================================" << std::endl;
}

void issueBook(std::vector<Book>& catalog) {
    if (catalog.empty()) {
        std::cout << "No books available to issue." << std::endl;
        return;
    }

    int id;
    std::cout << "Enter Book ID to issue: ";
    std::cin >> id;

    for (auto& book : catalog) {
        if (book.id == id) {
            if (book.isIssued) {
                std::cout << "Book is already issued to someone else." << std::endl;
            } else {
                book.isIssued = true;
                std::cout << "Book issued successfully!" << std::endl;
            }
            return;
        }
    }
    std::cout << "Book ID not found!" << std::endl;
}

void returnBook(std::vector<Book>& catalog) {
    if (catalog.empty()) {
        std::cout << "No books in the library system." << std::endl;
        return;
    }

    int id;
    std::cout << "Enter Book ID to return: ";
    std::cin >> id;

    for (auto& book : catalog) {
        if (book.id == id) {
            if (!book.isIssued) {
                std::cout << "This book is already in the library database." << std::endl;
            } else {
                book.isIssued = false;
                std::cout << "Book returned successfully!" << std::endl;
            }
            return;
        }
    }
    std::cout << "Book ID not found!" << std::endl;
}

int main() {
    std::vector<Book> catalog;
    int choice;

    while (true) {
        std::cout << "\n--- Library Management System ---" << std::endl;
        std::cout << "1. Add Book" << std::endl;
        std::cout << "2. Display Books" << std::endl;
        std::cout << "3. Issue Book" << std::endl;
        std::cout << "4. Return Book" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            addBook(catalog);
        } else if (choice == 2) {
            displayBooks(catalog);
        } else if (choice == 3) {
            issueBook(catalog);
        } else if (choice == 4) {
            returnBook(catalog);
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Invalid choice! Please try again." << std::endl;
        }
    }

    return 0;
}
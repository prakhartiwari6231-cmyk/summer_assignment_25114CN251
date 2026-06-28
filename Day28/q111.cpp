// wap to create ticket booking system

#include <iostream>
#include <vector>
#include <iomanip>

void displaySeating(const std::vector<std::vector<char>>& seats) {
    std::cout << "\n         ========== SCREEN ==========\n" << std::endl;
    std::cout << "   ";
    for (size_t col = 0; col < seats[0].size(); ++col) {
        std::cout << std::setw(3) << col + 1;
    }
    std::cout << "\n-----------------------------------" << std::endl;

    for (size_t row = 0; row < seats.size(); ++row) {
        std::cout << "R" << row + 1 << " |";
        for (size_t col = 0; col < seats[row].size(); ++col) {
            std::cout << std::setw(3) << seats[row][col];
        }
        std::cout << std::endl;
    }
}

void bookTickets(std::vector<std::vector<char>>& seats, double ticketPrice) {
    int count;
    std::cout << "Enter the number of tickets you want to book: ";
    std::cin >> count;

    if (count <= 0) {
        std::cout << "Invalid number of tickets!" << std::endl;
        return;
    }

    int bookedCount = 0;
    while (bookedCount < count) {
        int row, col;
        std::cout << "\nBooking ticket " << bookedCount + 1 << " of " << count << std::endl;
        std::cout << "Enter Row Number (1-" << seats.size() << "): ";
        std::cin >> row;
        std::cout << "Enter Seat Number (1-" << seats[0].size() << "): ";
        std::cin >> col;

        if (row < 1 || row > static_cast<int>(seats.size()) || col < 1 || col > static_cast<int>(seats[0].size())) {
            std::cout << "Invalid row or seat number! Try again." << std::endl;
            continue;
        }

        if (seats[row - 1][col - 1] == 'X') {
            std::cout << "Seat is already reserved! Please choose another seat." << std::endl;
        } else {
            seats[row - 1][col - 1] = 'X';
            bookedCount++;
            std::cout << "Seat R" << row << "S" << col << " selected successfully." << std::endl;
        }
    }

    double totalCost = count * ticketPrice;
    std::cout << "\n=========================================" << std::endl;
    std::cout << "             BOOKING SUMMARY             " << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "Tickets Booked : " << count << std::endl;
    std::cout << "Price Per Seat : $" << ticketPrice << std::endl;
    std::cout << "Total Amount   : $" << totalCost << std::endl;
    std::cout << "=========================================" << std::endl;
}

int main() {
    int totalRows = 5;
    int totalCols = 8;
    double ticketPrice = 12.50;

    std::vector<std::vector<char>> seats(totalRows, std::vector<char>(totalCols, '-'));
    int choice;

    std::cout << std::fixed << std::setprecision(2);

    while (true) {
        std::cout << "\n--- Ticket Booking System ---" << std::endl;
        std::cout << "1. View Seating Arrangement" << std::endl;
        std::cout << "2. Book Tickets" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
    }
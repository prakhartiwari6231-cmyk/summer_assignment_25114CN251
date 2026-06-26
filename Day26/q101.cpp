// wap to create number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    int secret臨umber = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "--- Number Guessing Game ---" << std::endl;
    std::cout << "I have chosen a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    while (guess != secret臨umber) {
        std::cout << "\nEnter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secret臨umber) {
            std::cout << "Too high! Try a lower number." << std::endl;
        } else if (guess < secret臨umber) {
            std::cout << "Too low! Try a higher number." << std::endl;
        } else {
            std::cout << "\nCongratulations! You guessed it right!" << std::endl;
            std::cout << "Total attempts: " << attempts << std::endl;
        }
    }

    return 0;
}
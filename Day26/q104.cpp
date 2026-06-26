// wap to create quiz application 

#include <iostream>
#include <vector>
#include <string>

struct Question {
    std::string text;
    std::vector<std::string> options;
    int correctOptionIndex;
};

int main() {
    std::vector<Question> quiz = {
        {
            "Which of the following is used to store text in C++?",
            {"int", "char", "string", "float"},
            2
        },
        {
            "What is the correct syntax to output text in C++?",
            {"print()", "cout <<", "System.out.print()", "Console.Write()"},
            1
        },
        {
            "Which loop is guaranteed to execute at least once?",
            {"for loop", "while loop", "do-while loop", "foreach loop"},
            2
        },
        {
            "What does the 'break' statement do inside a loop?",
            {"Continues to next iteration", "Exits the loop entirely", "Restarts the loop", "Terminates the program"},
            1
        }
    };

    int score = 0;
    int totalQuestions = quiz.size();

    std::cout << "--- Welcome to the C++ Quiz Application ---" << std::endl;
    std::cout << "Answer by entering the number of your choice (1-4).\n" << std::endl;

    for (size_t i = 0; i < quiz.size(); ++i) {
        std::cout << "Q" << i + 1 << ": " << quiz[i].text << std::endl;
        
        for (size_t j = 0; j < quiz[i].options.size(); ++j) {
            std::cout << j + 1 << ". " << quiz[i].options[j] << std::endl;
        }

        int userAnswer;
        std::cout << "Your Answer: ";
        std::cin >> userAnswer;

        if (userAnswer - 1 == quiz[i].correctOptionIndex) {
            std::cout << "Correct!\n" << std::endl;
            score++;
        } else {
            std::cout << "Wrong! The correct answer was: " 
                      << quiz[i].options[quiz[i].correctOptionIndex] << "\n" << std::endl;
        }
    }

    std::cout << "=========================================" << std::endl;
    std::cout << "               QUIZ OVER                 " << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "Your Final Score: " << score << " / " << totalQuestions << std::endl;
    
    double percentage = (static_cast<double>(score) / totalQuestions) * 100;
    std::cout;
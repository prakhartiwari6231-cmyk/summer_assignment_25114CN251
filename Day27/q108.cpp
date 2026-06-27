// wap to create marksheet generation system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Subject {
    std::string name;
    int maxMarks;
    int obtainedMarks;
};

struct Student {
    std::string name;
    int rollNumber;
    std::vector<Subject> subjects;
};

void generateMarksheet(const Student& student) {
    int totalMax = 0;
    int totalObtained = 0;

    std::cout << "\n=============================================" << std::endl;
    std::cout << "              PROGRESS REPORT                " << std::endl;
    std::cout << "=============================================" << std::endl;
    std::cout << "Student Name : " << student.name << std::endl;
    std::cout << "Roll Number  : " << student.rollNumber << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(20) << "Subject" 
              << std::setw(12) << "Max Marks" 
              << std::setw(12) << "Obtained" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (const auto& sub : student.subjects) {
        std::cout << std::left << std::setw(20) << sub.name 
                  << std::setw(12) << sub.maxMarks 
                  << std::setw(12) << sub.obtainedMarks << std::endl;
        
        totalMax += sub.maxMarks;
        totalObtained += sub.obtainedMarks;
    }

    double percentage = (static_cast<double>(totalObtained) / totalMax) * 100;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(20) << "Total" 
              << std::setw(12) << totalMax 
              << std::setw(12) << totalObtained << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Percentage : " << std::fixed << std::setprecision(2) << percentage << "%" << std::endl;
    
    std::cout << "Grade      : ";
    if (percentage >= 90) std::cout << "A+";
    else if (percentage >= 80) std::cout << "A";
    else if (percentage >= 70) std::cout << "B";
    else if (percentage >= 60) std::cout << "C";
    else if (percentage >= 50) std::cout << "D";
    else std::cout << "Fail";
    std::cout << std::endl;
    std::cout << "=============================================" << std::endl;
}

int main() {
    Student student;
    int numSubjects;

    std::cout << "Enter Student Name: ";
    std::getline(std::cin, student.name);

    std::cout << "Enter Roll Number: ";
    std::cin >> student.rollNumber;

    std::cout << "Enter number of subjects: ";
    std::cin >> numSubjects;

    for (int i = 0; i < numSubjects; ++i) {
        Subject sub;
        std::cout << "\nEnter name for subject " << i + 1 << ": ";
        std::cin.ignore();
        std::getline(std::cin, sub.name);
        
        std::cout << "Enter Maximum Marks: ";
        std::cin >> sub.maxMarks;
        
        std::cout << "Enter Obtained Marks: ";
        std::cin >> sub.obtainedMarks;
        
        student.subjects.push_back(sub);
    }

    generateMarksheet(student);

    return 0;
}
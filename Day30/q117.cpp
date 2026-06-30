// wap to create student record using array and string

#include <iostream>
#include <string>
#include <iomanip>

struct Student {
    int rollNumber;
    std::string name;
    std::string course;
    double marks;
};

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    while (true) {
        std::cout << "\n--- Student Record System ---" << std::endl;
        std::cout << "1. Add Student Record" << std::endl;
        std::cout << "2. Display All Records" << std::endl;
        std::cout << "3. Search Record by Roll Number" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                if (studentCount >= MAX_STUDENTS) {
                    std::cout << "Database is full! Cannot add more records." << std::endl;
                } else {
                    std::cout << "Enter Roll Number: ";
                    std::cin >> students[studentCount].rollNumber;
                    std::cin.ignore();
                    std::cout << "Enter Student Name: ";
                    std::getline(std::cin, students[studentCount].name);
                    std::cout << "Enter Course: ";
                    std::getline(std::cin, students[studentCount].course);
                    std::cout << "Enter Marks: ";
                    std::cin >> students[studentCount].marks;
                    
                    studentCount++;
                    std::cout << "Record added successfully!" << std::endl;
                }
                break;

            case 2:
                if (studentCount == 0) {
                    std::cout << "No records available." << std::endl;
                } else {
                    std::cout << "\n==========================================================================" << std::endl;
                    std::cout << std::left << std::setw(15) << "Roll Number" 
                              << std::setw(25) << "Name" 
                              << std::setw(20) << "Course" 
                              << std::setw(10) << "Marks" << std::endl;
                    std::cout << "==========================================================================" << std::endl;
                }
                    for (int i = 0; i < studentCount; ++i) {
                        std::cout << std::left << std::setw(15) << students[i].rollNumber;}}}
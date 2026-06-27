// wap to create student record management system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Student {
    int rollNumber;
    std::string name;
    std::string course;
    double gpa;
};

void addStudent(std::vector<Student>& database) {
    Student student;
    std::cout << "Enter Roll Number: ";
    std::cin >> student.rollNumber;
    std::cin.ignore();
    std::cout << "Enter Student Name: ";
    std::getline(std::cin, student.name);
    std::cout << "Enter Course/Branch: ";
    std::getline(std::cin, student.course);
    std::cout << "Enter GPA: ";
    std::cin >> student.gpa;

    database.push_back(student);
    std::cout << "Student record added successfully!" << std::endl;
}

void displayStudents(const std::vector<Student>& database) {
    if (database.empty()) {
        std::cout << "No student records found!" << std::endl;
        return;
    }

    std::cout << "\n==========================================================================" << std::endl;
    std::cout << std::left << std::setw(15) << "Roll Number" 
              << std::setw(25) << "Name" 
              << std::setw(20) << "Course" 
              << std::setw(10) << "GPA" << std::endl;
    std::cout << "==========================================================================" << std::endl;

    for (const auto& student : database) {
        std::cout << std::left << std::setw(15) << student.rollNumber 
                  << std::setw(25) << student.name 
                  << std::setw(20) << student.course 
                  << std::fixed << std::setprecision(2) << std::setw(10) << student.gpa << std::endl;
    }
    std::cout << "==========================================================================" << std::endl;
}

void updateStudent(std::vector<Student>& database) {
    if (database.empty()) {
        std::cout << "No student records available to update." << std::endl;
        return;
    }

    int roll;
    std::cout << "Enter Roll Number to update: ";
    std::cin >> roll;

    for (auto& student : database) {
        if (student.rollNumber == roll) {
            std::cin.ignore();
            std::cout << "Enter New Name: ";
            std::getline(std::cin, student.name);
            std::cout << "Enter New Course: ";
            std::getline(std::cin, student.course);
            std::cout << "Enter New GPA: ";
            std::cin >> student.gpa;
            std::cout << "Student record updated successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Roll Number not found!" << std::endl;
}

void deleteStudent(std::vector<Student>& database) {
    if (database.empty()) {
        std::cout << "No student records available to delete." << std::endl;
        return;
    }

    int roll;
    std::cout << "Enter Roll Number to delete: ";
    std::cin >> roll;

    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->rollNumber == roll) {
            database.erase(it);
            std::cout << "Student record deleted successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Roll Number not found!" << std::endl;
}

int main() {
    std::vector<Student> database;
    int choice;

    while (true) {
        std::cout << "\n--- Student Record Management System ---" << std::endl;
        std::cout << "1. Add Student" << std::endl;
        std::cout << "2. Display All Students" << std::endl;
        std::cout << "3. Update Student" << std::endl;
        std::cout << "4. Delete Student" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            addStudent(database);
        } else if (choice == 2) {
            displayStudents(database);
        } else if (choice == 3) {
            updateStudent(database);
        } else if (choice == 4) {
            deleteStudent(database);
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Invalid choice! Please try again." << std::endl;
        }
    }

    return 0;
}
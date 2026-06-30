// wap to create mini employee management system
#include <iostream>
#include <string>
#include <iomanip>

struct Employee {
    int id;
    std::string name;
    std::string department;
    double salary;
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee staff[MAX_EMPLOYEES];
    int empCount = 0;
    int choice;

    while (true) {
        std::cout << "\n--- Mini Employee Management System ---" << std::endl;
        std::cout << "1. Add Employee" << std::endl;
        std::cout << "2. Display All Employees" << std::endl;
        std::cout << "3. Search Employee by ID" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                if (empCount >= MAX_EMPLOYEES) {
                    std::cout << "Database full! Cannot add more employees." << std::endl;
                } else {
                    std::cout << "Enter Employee ID: ";
                    std::cin >> staff[empCount].id;
                    std::cin.ignore();
                    std::cout << "Enter Name: ";
                    std::getline(std::cin, staff[empCount].name);
                    std::cout << "Enter Department: ";
                    std::getline(std::cin, staff[empCount].department);
                    std::cout << "Enter Salary: $";
                    std::cin >> staff[empCount].salary;

                    empCount++;
                    std::cout << "Employee record added successfully!" << std::endl;
                }
                break;

            case 2:
                if (empCount == 0) {
                    std::cout << "No records available." << std::endl;
                } else {
                    std::cout << "\n==========================================================================" << std::endl;
                    std::cout << std::left << std::setw(10) << "ID" 
                              << std::setw(25) << "Name" 
                              << std::setw(20) << "Department" 
                              << std::setw(15) << "Salary" << std::endl;
                    std::cout << "==========================================================================" << std::endl;

                    for (int i = 0; i < empCount; ++i) {
                        std::cout << std::left << std::setw(10) << staff[i].id 
                                  << std::setw(25) << staff[i].name 
                                  << std::setw(20) << staff[i].department 
                                  << "$" << std::fixed << std::setprecision(2) << staff[i].salary << std::endl;
                    }
                    std::cout << "==========================================================================" << std::endl;
                }
                break;

            case 3:
                if (empCount == 0) {
                    std::cout << "No records available to search." << std::endl;
                } else {
                    int searchId;
                    bool found = false;
                    std::cout << "Enter Employee ID to search: ";
                    std::cin >> searchId;

                    for (int i = 0; i < empCount; ++i) {
                        if (staff[i].id == searchId) {
                            std::cout << "\nRecord Found:" << std::endl;
                            std::cout << "ID        : " << staff[i].id << std::endl;
                            std::cout << "Name      : ";}}}}}
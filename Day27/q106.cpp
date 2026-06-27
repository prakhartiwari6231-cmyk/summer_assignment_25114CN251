// wap to create employee management system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Employee {
    int id;
    std::string name;
    std::string department;
    std::string designation;
};

void addEmployee(std::vector<Employee>& database) {
    Employee emp;
    std::cout << "Enter Employee ID: ";
    std::cin >> emp.id;
    std::cin.ignore();
    std::cout << "Enter Employee Name: ";
    std::getline(std::cin, emp.name);
    std::cout << "Enter Department: ";
    std::getline(std::cin, emp.department);
    std::cout << "Enter Designation: ";
    std::getline(std::cin, emp.designation);

    database.push_back(emp);
    std::cout << "Employee added successfully!" << std::endl;
}

void displayEmployees(const std::vector<Employee>& database) {
    if (database.empty()) {
        std::cout << "No records found!" << std::endl;
        return;
    }

    std::cout << "\n==========================================================================" << std::endl;
    std::cout << std::left << std::setw(10) << "ID" 
              << std::setw(25) << "Name" 
              << std::setw(20) << "Department" 
              << std::setw(20) << "Designation" << std::endl;
    std::cout << "==========================================================================" << std::endl;

    for (const auto& emp : database) {
        std::cout << std::left << std::setw(10) << emp.id 
                  << std::setw(25) << emp.name 
                  << std::setw(20) << emp.department 
                  << std::setw(20) << emp.designation << std::endl;
    }
    std::cout << "==========================================================================" << std::endl;
}

void updateEmployee(std::vector<Employee>& database) {
    if (database.empty()) {
        std::cout << "No records available to update." << std::endl;
        return;
    }

    int id;
    std::cout << "Enter Employee ID to update: ";
    std::cin >> id;

    for (auto& emp : database) {
        if (emp.id == id) {
            std::cin.ignore();
            std::cout << "Enter New Name: ";
            std::getline(std::cin, emp.name);
            std::cout << "Enter New Department: ";
            std::getline(std::cin, emp.department);
            std::cout << "Enter New Designation: ";
            std::getline(std::cin, emp.designation);
            std::cout << "Employee updated successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Employee ID not found!" << std::endl;
}

void deleteEmployee(std::vector<Employee>& database) {
    if (database.empty()) {
        std::cout << "No records available to delete." << std::endl;
        return;
    }

    int id;
    std::cout << "Enter Employee ID to delete: ";
    std::cin >> id;

    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->id == id) {
            database.erase(it);
            std::cout << "Employee deleted successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Employee ID not found!" << std::endl;
}

int main() {
    std::vector<Employee> database;
    int choice;

    while (true) {
        std::cout << "\n--- Employee Management System ---" << std::endl;
        std::cout << "1. Add Employee" << std::endl;
        std::cout;}}
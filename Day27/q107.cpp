// wap to create salay management system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Employee {
    int id;
    std::string name;
    double baseSalary;
    double allowances;
    double deductions;
    double netSalary;
};

void calculateSalary(Employee& emp) {
    emp.netSalary = emp.baseSalary + emp.allowances - emp.deductions;
}

void displaySalarySlip(const Employee& emp) {
    std::cout << "\n=============================================" << std::endl;
    std::cout << "                 SALARY SLIP                 " << std::endl;
    std::cout << "=============================================" << std::endl;
    std::cout << std::left << std::setw(20) << "Employee ID:" << emp.id << std::endl;
    std::cout << std::left << std::setw(20) << "Employee Name:" << emp.name << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << std::setw(20) << "Base Salary:" << "$" << emp.baseSalary << std::endl;
    std::cout << std::left << std::setw(20) << "Allowances:" << "+ $" << emp.allowances << std::endl;
    std::cout << std::left << std::setw(20) << "Deductions:" << "- $" << emp.deductions << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(20) << "Net Salary:" << "$" << emp.netSalary << std::endl;
    std::cout << "=============================================" << std::endl;
}

int main() {
    std::vector<Employee> database;
    int choice;

    while (true) {
        std::cout << "\n--- Salary Management System ---" << std::endl;
        std::cout << "1. Add Employee & Calculate Salary" << std::endl;
        std::cout << "2. Display All Salary Slips" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Employee emp;
            std::cout << "Enter Employee ID: ";
            std::cin >> emp.id;
            std::cin.ignore();
            std::cout << "Enter Employee Name: ";
            std::getline(std::cin, emp.name);
            std::cout << "Enter Base Salary: ";
            std::cin >> emp.baseSalary;
            std::cout << "Enter Allowances: ";
            std::cin >> emp.allowances;
            std::cout << "Enter Deductions: ";
            std::cin >> emp.deductions;

            calculateSalary(emp);
            database.push_back(emp);
            std::cout << "Employee record added successfully!" << std::endl;

        } else if (choice == 2) {
            if (database.empty()) {
                std::cout << "No records found!" << std::endl;
            } else {
                for (const auto& emp : database) {
                    displaySalarySlip(emp);
                }
            }}}
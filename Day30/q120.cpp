// wap to develop complete mini project using array, strings and functions

#include <iostream>
#include <string>
#include <iomanip>

struct Vehicle {
    int id;
    std::string model;
    std::string type;
    double pricePerDay;
    bool isRented;
};

void addVehicle(Vehicle fleet[], int& count, int maxLimit) {
    if (count >= maxLimit) {
        std::cout << "Inventory full! Cannot add more vehicles." << std::endl;
        return;
    }

    std::cout << "Enter Vehicle ID: ";
    std::cin >> fleet[count].id;
    std::cin.ignore();
    std::cout << "Enter Model/Name: ";
    std::getline(std::cin, fleet[count].model);
    std::cout << "Enter Type (Car/Bike/SUV): ";
    std::getline(std::cin, fleet[count].type);
    std::cout << "Enter Rental Price Per Day: $";
    std::cin >> fleet[count].pricePerDay;
    fleet[count].isRented = false;

    count++;
    std::cout << "Vehicle added to fleet successfully!" << std::endl;
}

void displayFleet(const Vehicle fleet[], int count) {
    if (count == 0) {
        std::cout << "No vehicles available in the fleet." << std::endl;
        return;
    }

    std::cout << "\n==========================================================================" << std::endl;
    std::cout << std::left << std::setw(10) << "ID" 
              << std::setw(25) << "Model" 
              << std::setw(15) << "Type" 
              << std::setw(12) << "Price/Day" 
              << std::setw(10) << "Status" << std::endl;
    std::cout << "==========================================================================" << std::endl;

    for (int i = 0; i < count; ++i) {
        std::cout << std::left << std::setw(10) << fleet[i].id 
                  << std::setw(25) << fleet[i].model 
                  << std::setw(15) << fleet[i].type 
                  << "$" << std::fixed << std::setprecision(2) << std::setw(11) << fleet[i].pricePerDay 
                  << (fleet[i].isRented ? "Rented" : "Available") << std::endl;
    }
    std::cout << "==========================================================================" << std::endl;
}

void rentVehicle(Vehicle fleet[], int count) {
    if (count == 0) {
        std::cout << "Fleet is empty." << std::endl;
        return;
    }

    int searchId, days;
    std::cout << "Enter Vehicle ID to rent: ";
    std::cin >> searchId;

    for (int i = 0; i < count; ++i) {
        if (fleet[i].id == searchId) {
            if (fleet[i].isRented) {
                std::cout << "Sorry, this vehicle is already out on rent." << std::endl;
                return;
            }
            
            std::cout << "Enter number of rental days: ";
            std::cin >> days;
            
            if (days <= 0) {
                std::cout << "Invalid number of days!" << std::endl;
                return;
            }

            fleet[i].isRented = true;
            double totalCost = fleet[i].pricePerDay * days;
            
            std::cout << "\n--- Rental Receipt ---" << std::endl;
            std::cout << "Vehicle: " << fleet[i].model << std::endl;
            std::cout << "Days   : " << days << std::endl;
            std::cout << "Total  : $" << std::fixed << std::setprecision(2) << totalCost << std::endl;
            std::cout << "Booking Confirmed!" << std::endl;
            return;
        }
    }
    std::cout << "Vehicle ID not found." << std::endl;
}

void returnVehicle(Vehicle fleet[], int count) {
    if (count == 0) {
        std::cout << "Fleet is empty." << std::endl;
        return;
    }

    int searchId;
    std::cout << "Enter Vehicle ID to return: ";
    std::cin >> searchId;

    for (int i = 0; i < count; ++i) {
        if (fleet[i].id == searchId) {
            if (!fleet[i].isRented) {
                std::cout << "This vehicle is already available in the garage." << std::endl;
                return;
            }
            fleet[i].isRented = false;
            std::cout << "Vehicle '" << fleet[i].model << "' returned successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Vehicle ID not found." << std::endl;
}

int main() {
    const int MAX_VEHICLES = 100;
    Vehicle fleet[MAX_VEHICLES];
    int vehicleCount = 0;
    int choice;

    while (true) {
        std::cout << "\n--- Vehicle Rental System ---" << std::endl;
        std::cout << "1. Add Vehicle to Fleet" << std::endl;
        std::cout << "2. View Showroom / Fleet Status" << std::endl;
        std::cout << "3. Rent a Vehicle" << std::endl;
        std::cout << "4. Return a Vehicle" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                addVehicle(fleet, vehicleCount, MAX_VEHICLES);
                break;
            case 2:
                displayFleet(fleet, vehicleCount);
                break;
            case 3:
                displayFleet(fleet, vehicleCount);
                rentVehicle(fleet, vehicleCount);
                break;
            case 4:
                returnVehicle(fleet, vehicleCount);
                break;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }

    return 0;
}
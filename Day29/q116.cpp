// wap to create inventory management system

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Item {
    int id;
    std::string name;
    int quantity;
    double price;
};

void addItem(std::vector<Item>& inventory) {
    Item newItem;
    std::cout << "Enter Item ID: ";
    std::cin >> newItem.id;
    std::cin.ignore();
    std::cout << "Enter Item Name: ";
    std::getline(std::cin, newItem.name);
    std::cout << "Enter Quantity: ";
    std::cin >> newItem.quantity;
    std::cout << "Enter Price per Unit: $";
    std::cin >> newItem.price;

    inventory.push_back(newItem);
    std::cout << "Item added to inventory successfully!" << std::endl;
}

void displayInventory(const std::vector<Item>& inventory) {
    if (inventory.empty()) {
        std::cout << "Inventory is empty!" << std::endl;
        return;
    }

    std::cout << "\n==========================================================================" << std::endl;
    std::cout << std::left << std::setw(10) << "ID" 
              << std::setw(30) << "Item Name" 
              << std::setw(15) << "Quantity" 
              << std::setw(15) << "Price" << std::endl;
    std::cout << "==========================================================================" << std::endl;

    for (const auto& item : inventory) {
        std::cout << std::left << std::setw(10) << item.id 
                  << std::setw(30) << item.name 
                  << std::setw(15) << item.quantity 
                  << "$" << std::fixed << std::setprecision(2) << item.price << std::endl;
    }
    std::cout << "==========================================================================" << std::endl;
}

void updateStock(std::vector<Item>& inventory) {
    if (inventory.empty()) {
        std::cout << "Inventory is empty! No items to update." << std::endl;
        return;
    }

    int id;
    std::cout << "Enter Item ID to update stock: ";
    std::cin >> id;

    for (auto& item : inventory) {
        if (item.id == id) {
            int option;
            std::cout << "1. Restock (Add)\n2. Sell/Reduce\nEnter your option: ";
            std::cin >> option;

            int amt;
            std::cout << "Enter quantity change amount: ";
            std::cin >> amt;

            if (option == 1) {
                item.quantity += amt;
                std::cout << "Stock restocked successfully!" << std::endl;
            } else if (option == 2) {
                if (amt > item.quantity) {
                    std::cout << "Error: Not enough stock available!" << std::endl;
                } else {
                    item.quantity -= amt;
                    std::cout << "Stock reduced successfully!" << std::endl;
                }
            } else {
                std::cout << "Invalid choice!" << std::endl;
            }
            return;
        }
    }
    std::cout << "Item ID not found!" << std::endl;
}

void checkLowStock(const std::vector<Item>& inventory) {
    int threshold;
    std::cout << "Enter low stock threshold limit: ";
    std::cin >> threshold;

    bool found = false;
    std::cout << "\n--- Low Stock Alert ---" << std::endl;
    for (const auto& item : inventory) {
        if (item.quantity <= threshold) {
            std::cout << "Warning: " << item.name << " (ID: " << item.id << ") has only " << item.quantity << " items left." << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "All items are well above the threshold limit." << std::endl;
    }
}

int main() {
    std::vector<Item> inventory;
    int choice;

    while (true) {
        std::cout << "\n--- Inventory Management System ---" << std::endl;
        std::cout << "1. Add New Item" << std::endl;
        std::cout << "2. View Entire Inventory" << std::endl;
        std::cout << "3. Update Item Stock Level" << std::endl;
        std::cout << "4. Check Low Stock Items" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                addItem(inventory);
                break;
            case 2:
                displayInventory(inventory);
                break;
            case 3:
                updateStock(inventory);
                break;
            case 4:
                checkLowStock(inventory);
                break;
            default:
                std::cout << "Invalid choice! Please select a valid option." << std::endl;
                break;
        }
    }

    return 0;
}
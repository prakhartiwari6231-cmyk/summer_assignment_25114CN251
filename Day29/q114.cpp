// wap to create menu driven array operations system

#include <iostream>

void displayArray(const int arr[], int size) {
    if (size == 0) {
        std::cout << "Array is empty!" << std::endl;
        return;
    }
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertElement(int arr[], int& size, int capacity) {
    if (size >= capacity) {
        std::cout << "Array is full! Cannot insert." << std::endl;
        return;
    }
    int element, position;
    std::cout << "Enter element to insert: ";
    std::cin >> element;
    std::cout << "Enter position (1 to " << size + 1 << "): ";
    std::cin >> position;

    if (position < 1 || position > size + 1) {
        std::cout << "Invalid position!" << std::endl;
        return;
    }

    for (int i = size; i >= position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    size++;
    std::cout << "Element inserted successfully!" << std::endl;
}

void deleteElement(int arr[], int& size) {
    if (size == 0) {
        std::cout << "Array is empty! Nothing to delete." << std::endl;
        return;
    }
    int position;
    std::cout << "Enter position to delete (1 to " << size << "): ";
    std::cin >> position;

    if (position < 1 || position > size) {
        std::cout << "Invalid position!" << std::endl;
        return;
    }

    for (int i = position - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--;
    std::cout << "Element deleted successfully!" << std::endl;
}

void searchElement(const int arr[], int size) {
    if (size == 0) {
        std::cout << "Array is empty!" << std::endl;
        return;
    }
    int element;
    std::cout << "Enter element to search: ";
    std::cin >> element;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            std::cout << "Element found at index " << i << " (Position " << i + 1 << ")" << std::endl;
            return;
        }
    }
    std::cout << "Element not found in the array." << std::endl;
}

void reverseArray(int arr[], int size) {
    if (size == 0) {
        std::cout << "Array is empty!" << std::endl;
        return;
    }
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    std::cout << "Array reversed successfully!" << std::endl;
}

int main() {
    const int capacity = 100;
    int arr[capacity];
    int size = 0;
    int choice;

    while (true) {
        std::cout << "\n--- Array Operations System ---" << std::endl;
        std::cout << "1. Display Array" << std::endl;
        std::cout << "2. Insert Element" << std::endl;
        std::cout << "3. Delete Element" << std::endl;
        std::cout << "4. Search Element" << std::endl;
        std::cout << "5. Reverse Array" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 6) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                insertElement(arr, size, capacity);
                break;
            case 3:
                deleteElement(arr, size);
                break;
            case 4:
                searchElement(arr, size);
                break;
            case 5:
                reverseArray(arr, size);
                break;
            default:
                std::cout << "Invalid choice! Please select a valid option." << std::endl;
                break;
        }
    }

    return 0;
}
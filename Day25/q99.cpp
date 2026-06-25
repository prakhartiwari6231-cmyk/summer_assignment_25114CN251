// wap to sort names alphabetically

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Rahul", "Amit", "Vijay", "Aman", "Deepak"};

    std::sort(names.begin(), names.end());

    std::cout << "Sorted names:" << std::endl;
    for (const std::string& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
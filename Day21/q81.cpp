// wap to find string length without strlen()

#include <iostream>
#include <string>

int main() {
    std::string text = "Hello World";
    int length = text.length(); 
    std::cout << "The length of the string is: " << length << std::endl;
    return 0;
}
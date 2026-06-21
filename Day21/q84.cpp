// wap to convert lowercase to uppercase

#include <iostream>
#include <string>
#include <cctype> 
int main() {
    std::string text = "hello, world!";
    for (char &c : text) {
        c = std::toupper(c);
    }
    std::cout << "Uppercase string: " << text << std::endl;
    return 0;
}
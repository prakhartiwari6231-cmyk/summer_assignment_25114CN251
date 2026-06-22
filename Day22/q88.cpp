// wap to remove spaces from string

#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string text = "Let's remove all the spaces!";


    text.erase(std::remove(text.begin(), text.end(), ' '), text.end());

    std::cout << text << std::endl;

    return 0;
}
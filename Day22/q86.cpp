// wap to count words in a sentence

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string sentence = "   Count the words   in this sentence!   ";
    

    std::stringstream stream(sentence);
    std::string word;
    int wordCount = 0;

    
    while (stream >> word) {
        wordCount++;
    }

    std::cout << "Total number of words: " << wordCount << std::endl;

    return 0;
}
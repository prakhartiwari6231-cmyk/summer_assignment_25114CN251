// wap to find longest word

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string findLongestWord(string sentence) {
    stringstream ss(sentence);
    string word;
    string longestWord = "";

    while (ss >> word) {
        
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    return longestWord;
}

int main() {
    string sentence = "C++ is a powerful programming language";
    string result = findLongestWord(sentence);
    
    cout << "The longest word is: \"" << result << "\"" << endl;
    cout << "Length: " << result.length() << " characters." << endl;
    
    return 0;
}
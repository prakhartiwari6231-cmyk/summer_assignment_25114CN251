// wap to find first non repeating character

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char findFirstNonRepeating(string s) {
    vector<int> count(256, 0);
    for (char c : s) {
        count[c]++;
    }
    for (char c : s) {
        if (count[c] == 1) {
            return c; 
        }
    }
    return '\0'; 
}

int main() {
    string str = "swiss";
    char result = findFirstNonRepeating(str);
    
    if (result != '\0') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "All characters repeat!" << endl;
    }
    
    return 0;
}
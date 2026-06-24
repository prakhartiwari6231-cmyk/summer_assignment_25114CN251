// wap to find first repeating character

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

char findFirstRepeating(string s) {
    unordered_set<char> seen;
    for (char c : s) {
        if (seen.find(c) != seen.end()) {
            return c;
        }
        seen.insert(c);
    }
    return '\0'; 
}

int main() {
    string str = "geeksforgeeks";
    char result = findFirstRepeating(str);
    
    if (result != '\0') {
        cout << "The first repeating character is: " << result << endl;
    } else {
        cout << "No repeating characters found!" << endl;
    }
    
    return 0;
}
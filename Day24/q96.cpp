// wap to remove duplicate character

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string removeDuplicates(string s) {
    unordered_set<char> seen;
    string result = "";
    
    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);  
            result += c;     
        }
    }
    
    return result;
}

int main() {
    string str = "programming";
    cout << "Original: " << str << endl;
    cout << "After removing duplicates: " << removeDuplicates(str) << endl;
    
    return 0;
}
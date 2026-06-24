// wap to find maximum occuring character 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char getMaxOccurringChar(string s) {
    vector<int> count(256, 0);
    for (char c : s) {
        count[c]++;
    }
    int maxCount = 0;
    char maxChar = '\0';
    
    for (char c : s) {
        if (count[c] > maxCount) {
            maxCount = count[c];
            maxChar = c;
        }
    }
    
    return maxChar;
}

int main() {
    string str = "test sample";
    char result = getMaxOccurringChar(str);
    
    if (result != '\0') {
        cout << "The maximum occurring character is: '" << result << "'" << endl;
    } else {
        cout << "String is empty!" << endl;
    }
    
    return 0;
}
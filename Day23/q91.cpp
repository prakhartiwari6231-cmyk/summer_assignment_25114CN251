// wap to check anagram string

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    vector<int> count(256, 0);
    for (int i = 0; i < s1.length(); i++) {
        count[s1[i]]++; 
        count[s2[i]]--; 
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";
    
    if (isAnagram(str1, str2)) {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are anagrams!" << endl;
    } else {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are NOT anagrams!" << endl;
    }
    
    return 0;
}


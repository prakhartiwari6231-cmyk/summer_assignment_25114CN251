// wap to compress a string

#include <iostream>
#include <string>

using namespace std;

string compressString(string s) {
    int n = s.length();
    if (n == 0) return s;

    string compressed = "";
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i + 1]) {
            count++;
        } else {
            compressed += s[i] + to_string(count);
            count = 1; 
        }
    }
    return compressed.length() < s.length() ? compressed : s;
}

int main() {
    string str = "aabcccccaaa";
    cout << "Original: " << str << endl;
    cout << "Compressed: " << compressString(str) << endl;
    
    return 0;
}
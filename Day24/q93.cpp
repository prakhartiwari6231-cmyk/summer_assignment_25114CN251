// wap to check string rotation

#include <iostream>
#include <string>

using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    string concatenated = s1 + s1;
    if (concatenated.find(s2) != string::npos) {
        return true;
    }
    return false;
}
int main() {
    string str1 = "waterbottle";
    string str2 = "erbottlewat";
    
    if (isRotation(str1, str2)) {
        cout << "\"" << str2 << "\" is a rotation of \"" << str1 << "\"" << endl;
    } else {
        cout << "\"" << str2 << "\" is NOT a rotation of \"" << str1 << "\"" << endl;
    }
    
    return 0;
}
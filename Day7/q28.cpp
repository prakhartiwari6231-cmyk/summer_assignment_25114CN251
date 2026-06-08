// wap recursive reverse number
#include <iostream>
using namespace std;

int rev = 0;

int reverseNum(int n)
{
    if (n == 0)
        return rev;

    rev = rev * 10 + n % 10;
    return reverseNum(n / 10);
}

int main()
{
    int n;
    cin >> n;

    cout << reverseNum(n);

    return 0;
}
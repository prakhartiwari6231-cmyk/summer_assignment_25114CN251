//wap to print largest prime factor
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largestPrimeFactor = 0;

    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0)   // i is a factor
        {
            bool isPrime = true;

            for(int j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime)
            {
                largestPrimeFactor = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}
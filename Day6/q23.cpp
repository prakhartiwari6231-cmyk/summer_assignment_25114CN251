//wap to count set bits in a number

#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter number: ";
    cin>>n;
     while (n > 0) {
        count = count + (n & 1); 
        n = n>>1;          
    }
cout<<count;
}
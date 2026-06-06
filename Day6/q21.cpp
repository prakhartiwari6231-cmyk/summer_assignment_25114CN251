// decimal to  binary

#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int n,r,s=0,d=1;
     cout<<"Entre a num: ";
     cin>>n;
     while(n>0){
        r=n%2;
        n=n/2;
        s=s+d*r;
        d=d*10;
     }
     cout<<s;
}
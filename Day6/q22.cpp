// binary to decimal

#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int n,r,s=0,d=1;
     cout<<"Entre a num: ";
     cin>>n;
     while(n>0){
        r=n%10;
        n=n/10;
        s=s+d*r;
        d=d*2;
     }
     cout<<s;
}
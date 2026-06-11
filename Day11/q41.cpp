// wap to write function to find sum of two numbers

#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Entre two numbers: ";
    cin>>a>>b;
    cout<<sum(a,b);
}
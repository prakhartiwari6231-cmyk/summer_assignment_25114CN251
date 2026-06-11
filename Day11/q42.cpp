// wap to write function to find maximum

#include<iostream>
using namespace std;
int findMax(int a,int b){
    if(a>b) return a;
    else if(a<b)  return b;
    else cout<<"same number"<<endl; 
    return a;
}
int main(){
    int a,b;
    cout<<"Entre two numbers: ";
    cin>>a>>b;
    cout<<findMax(a,b);
}
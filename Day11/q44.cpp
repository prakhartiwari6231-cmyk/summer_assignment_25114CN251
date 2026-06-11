//wap to write function to find factorial

#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
     for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
   }
int main(){
    int n;
    cout<<"Entre number: ";
    cin>>n;
    if(n<0){
        cout<<"not possible";
    }
    else 
    cout<<fact(n);
}
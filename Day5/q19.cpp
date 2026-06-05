//wap to print factor of a number
#include<iostream>
using namespace std;
int main(){
    int n;
 cout<<"enter num: ";
 cin>>n;   
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<' ';
        }
    }

 }

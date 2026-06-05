//wap to check strong number

#include<iostream>
using namespace std;
int main(){
    int n,ld,fact,sum=0;
    cout<<"enter a num: ";
    cin>>n;
    int original=n;
    while(n>0){
        ld=n%10;
fact=1;
for(int i=1;i<=ld;i++){
    fact=fact*i;
}
sum=sum+fact;
n=n/10;

    }
    if(sum==original)
    cout<<original<<" is a strong num";
    else 
    cout<<original<<" is not a strong num";
}
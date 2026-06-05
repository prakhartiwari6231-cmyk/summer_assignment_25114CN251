// WAP to check perfect number

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
cout<<"Enter a number: ";
cin>>n;
for(int i=1;i<n;i++){
if(n%i==0){ 
    sum=sum+i;}
}
if(sum==n){
    cout<<"Perfect number";
}
else{
    cout<<"Not a perfect number";
}
}
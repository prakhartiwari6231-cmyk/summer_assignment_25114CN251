// wap to print reverse star pattern 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i+1){
                cout<<"* ";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
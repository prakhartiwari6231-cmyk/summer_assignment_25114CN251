// wap to print repeated character pattern

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<(char)(i+64);
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
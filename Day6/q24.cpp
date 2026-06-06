//wap to find x^n without pow()

#include <iostream>
using namespace std;
int main() {
    int x,n;
    cin>>x>>n;
    int ans=1;
    while (n>0) {
        if (n%2==1){
            ans=ans*x;
            x=x*x;
            n=n/2;
        }
}
    cout<<ans;
}
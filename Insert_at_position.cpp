#include <iostream>
using namespace std;
int main(){
    int n,pos,x;cin>>n;int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>pos>>x;
    for(int i=n;i>=pos;i--)a[i]=a[i-1];
    a[pos]=x;
    for(int i=0;i<=n;i++)cout<<a[i]<<" ";
}

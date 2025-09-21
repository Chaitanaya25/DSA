#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;int a[n+1];for(int i=0;i<n;i++)cin>>a[i];
    int x;cin>>x;
    for(int i=n;i>0;i--)a[i]=a[i-1];
    a[0]=x;
    for(int i=0;i<=n;i++)cout<<a[i]<<" ";
}

#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    int x;cin>>x;a[n]=x;
    for(int i=0;i<=n;i++)cout<<a[i]<<" ";
}

#include <iostream>
using namespace std;
int main(){
    int n,pos;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>pos;
    for(int i=pos;i<n-1;i++)a[i]=a[i+1];
    for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
}

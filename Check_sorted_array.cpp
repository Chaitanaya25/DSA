#include <iostream>
using namespace std;
int main(){
    int n,f=1;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)if(a[i]<a[i-1])f=0;
    cout<<(f?"YES":"NO");
}

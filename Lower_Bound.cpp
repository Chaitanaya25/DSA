#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,x;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>x;
    cout<<lower_bound(a,a+n,x)-a;
}

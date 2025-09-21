#include <iostream>
using namespace std;
int main(){
    int n,m;cin>>n;int a[n];cin>>a[0];m=a[0];
    for(int i=1;i<n;i++){cin>>a[i];if(a[i]>m)m=a[i];}
    cout<<m;
}

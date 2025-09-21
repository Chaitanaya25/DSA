#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;int a[n][n];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    for(int j=0;j<n;j++){for(int i=n-1;i>=0;i--)cout<<a[i][j]<<" ";cout<<endl;}
}

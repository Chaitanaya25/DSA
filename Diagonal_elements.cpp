#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;int a[n][n];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    for(int i=0;i<n;i++)cout<<a[i][i]<<" "<<a[i][n-i-1]<<" ";
}

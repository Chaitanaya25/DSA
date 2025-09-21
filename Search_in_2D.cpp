#include <iostream>
using namespace std;
int main(){
    int n,m,x;cin>>n>>m;int a[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    cin>>x;int f=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(a[i][j]==x)f=1;
    cout<<(f?"YES":"NO");
}

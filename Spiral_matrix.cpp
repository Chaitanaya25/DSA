#include <iostream>
using namespace std;
int main(){
    int n,m;cin>>n>>m;int a[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    int top=0,bot=n-1,left=0,right=m-1;
    while(top<=bot&&left<=right){
        for(int i=left;i<=right;i++)cout<<a[top][i]<<" ";top++;
        for(int i=top;i<=bot;i++)cout<<a[i][right]<<" ";right--;
        if(top<=bot){for(int i=right;i>=left;i--)cout<<a[bot][i]<<" ";bot--;}
        if(left<=right){for(int i=bot;i>=top;i--)cout<<a[i][left]<<" ";left++;}
    }
}

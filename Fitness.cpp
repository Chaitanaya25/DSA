#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int s=0,m=0;
        for(int i=0;i<7&&i<n;i++)s+=a[i];
        m=s;
        for(int i=7;i<n;i++){s+=a[i]-a[i-7];if(s>m)m=s;}
        cout<<m<<endl;
    }
}

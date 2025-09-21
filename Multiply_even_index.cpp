#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;int a[n],p=1;
    for(int i=0;i<n;i++){cin>>a[i];if(i%2==0)p*=a[i];}
    cout<<p;
}

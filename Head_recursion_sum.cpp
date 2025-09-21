#include <iostream>
using namespace std;
int f(int n){if(n==0)return 0;int s=f(n-1);return s+n;}
int main(){int n;cin>>n;cout<<f(n);}

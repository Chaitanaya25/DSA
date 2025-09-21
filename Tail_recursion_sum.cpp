#include <iostream>
using namespace std;
int f(int n,int s){if(n==0)return s;return f(n-1,s+n);}
int main(){int n;cin>>n;cout<<f(n,0);}

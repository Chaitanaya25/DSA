#include <iostream>
using namespace std;
int f(int n){return n>100?n-10:f(f(n+11));}
int main(){int n;cin>>n;cout<<f(n);}

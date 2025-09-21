#include <iostream>
using namespace std;
int f(int n){return n==0?0:n%10+f(n/10);}
int main(){int n;cin>>n;cout<<f(n);}

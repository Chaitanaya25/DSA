#include <iostream>
using namespace std;
int main(){
    long long n;cin>>n;int c=0;
    while(n){c++;n/=10;}
    cout<<c;
}

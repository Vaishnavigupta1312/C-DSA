#include<bits/stdc++.h>
using namespace std;

// Decimal to binary conversion
int main(){
    int i=0,n,bit, ans=0;
    cin>>n;
    while(n!=0){
        bit=n&1;
        ans= bit*pow(10,i)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}
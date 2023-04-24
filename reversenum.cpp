#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, digit,ans=0,i=0;
    cin>>n;
    while(n!=0){

        // // i/p -> 123
        // // o/p -> 123 (same flow)

        // digit=n%10;
        // ans= (digit*pow(10,i))+ans;
        // n=n/10;
        // i++;


        // i/p -> 1,2,3 
        // o/p -> 321 (reverse flow)

        digit=n%10;
        ans=ans*10+digit;
        n=n/10;
        i++;

    }
    cout<<ans;
}
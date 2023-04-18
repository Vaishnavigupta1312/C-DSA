#include<bits/stdc++.h>
using namespace std;

    // * * * * * 
    // * * * *
    // * * *
    // * *
    // *

int main(){
    int i=0,n;
    int star=0;
    cin>>n;
    while(i<n){
        star=0;
        while(star<n-i){
            cout<<"*"<<" ";
            star+=1;
        }
        i+=1;
        cout<<endl;
    }
}
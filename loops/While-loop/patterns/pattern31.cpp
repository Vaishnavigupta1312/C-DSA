#include <bits/stdc++.h>
using namespace std;

    // * * * * * 
    // *       * 
    // *       *
    // *       *
    // * * * * *        n=5

int main(){
    int i=1,j=1,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            if((i==1)||(i==n)||(j==1)||(j==n)) cout<<"*"<<" ";
            else cout <<" "<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
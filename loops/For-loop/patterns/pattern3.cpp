#include<bits/stdc++.h>
using namespace std;

    // * * * * * 
    // *       *
    // *       *
    // *       *
    // * * * * *    n=5

int main(){
    int i=1,j=1,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i==1)||(i==n)||(j==1)||(j==n)) cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
}
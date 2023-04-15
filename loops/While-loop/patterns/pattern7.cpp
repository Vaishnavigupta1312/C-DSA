#include<bits/stdc++.h>
using namespace std;

// * 
// * *
// * * *
// * * * *
// * * * * *

int main(){
    int i=0,j=0,n;
    cin>>n;
    while(i<n){
        j=0;
        while(j<=i){
            cout<<'*'<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
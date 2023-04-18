#include<bits/stdc++.h>
using namespace std;

    // 4 4 4 4 4 4 4 
    // 4 3 3 3 3 3 4
    // 4 3 2 2 2 3 4
    // 4 3 2 1 2 3 4
    // 4 3 2 2 2 3 4
    // 4 3 3 3 3 3 4
    // 4 4 4 4 4 4 4    n=4;

int main(){
    int i=1,j=1,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-min(i,j)+1<<" ";
            j+=1;
        }
        while(j<2*n){
            cout<<n-min(i,2*n-j)+1<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
    i=n+1;
    while(i<2*n){
        j=1;
        while(j<=n){
            cout<<n-min(2*n-i,j)+1<<" ";
            j+=1;
        }
        while(j<2*n){
            cout<<n-min(2*n-i,2*n-j)+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
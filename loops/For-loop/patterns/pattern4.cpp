#include<bits/stdc++.h>
using namespace std;

    // 4 4 4 4 4 4 4 
    // 4 3 3 3 3 3 4
    // 4 3 2 2 2 3 4
    // 4 3 2 1 2 3 4
    // 4 3 2 2 2 3 4 
    // 4 3 3 3 3 3 4
    // 4 4 4 4 4 4 4        n=4;

int main(){
    int i=1,j=1,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<n-min(i,j)+1<<" ";
        }
        for(j=n+1;j<2*n;j++){
            cout<<n-min(i, 2*n-j)+1<<" ";
        }
        cout<<endl;
    }
    
    for(i=n+1;i<2*n;i++){
        for(j=1;j<=n;j++){
            cout<<n-min(2*n-i,j)+1<<" ";
        }
        for(j=n+1;j<2*n;j++){
            cout<<n-min(2*n-i,2*n-j)+1<<" ";
        }
        cout<<endl;
    }
    
}
#include<bits/stdc++.h>
using namespace std;

// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

int main(){
    int i=0, j=0,n;
    cin>>n;
    while(i<n){
        j=0;
        while(j<=i){
            cout<<i-j+1<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
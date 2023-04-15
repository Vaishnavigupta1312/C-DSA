#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

int main(){
    int i=0, j=0, n;
    cin>>n;
    while(i<n){
        j=0;
        while(j<n){
            cout<<j+1<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
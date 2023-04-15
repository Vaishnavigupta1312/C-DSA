#include<bits/stdc++.h>
using namespace std;

// 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

int main(){
    int i=0, j=0, n;
    cin>>n;
    while(i<n){
        j=0;
        while(j<n){
            cout<<setw(2)<<setfill(' ')<<i+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
#include <bits/stdc++.h>
using namespace std;

// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6

int main(){
    int i=0,j,n;
    cin>>n;
    while(i<n){
        j=0;
        while(j<=i){
            //cout<<i+1<<" ";
            cout<<setw(2)<<setfill(' ')<<i+1<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
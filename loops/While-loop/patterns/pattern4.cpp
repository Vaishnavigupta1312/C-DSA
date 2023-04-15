#include<bits/stdc++.h>
using namespace std;

// 5 4 3 2 1 
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

int main(){
    int i=0, j, n;
    cin>>n;
    while(i<n){
        j=n;
        while(j>0){
            cout<<setw(2)<<setfill(' ')<<j<<" ";
            j-=1;

        }
        i+=1;
        cout<<endl;

    }
}
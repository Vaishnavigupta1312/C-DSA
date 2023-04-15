#include<bits/stdc++.h>
using namespace std;

//  1  2  3  4 
//  5  6  7  8
//  9 10 11 12
// 13 14 15 16

int main(){
    int i=0,j,count=1,n;
    cin>>n;
    while(i<n){
        j=0;
        while(j<n){
            cout<<setw(2)<<setfill(' ')<<count<<" ";
            count++;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
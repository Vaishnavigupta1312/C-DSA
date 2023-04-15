#include<bits/stdc++.h>
using namespace std;

// 25 24 23 22 21 
// 20 19 18 17 16 
// 15 14 13 12 11 
// 10  9  8  7  6     
//  5  4  3  2  1      

int main(){
    int i=0, j=0, n;
    cin>>n;
    int count=(n*n);
    while(i<n){
        j=0;
        while(j<n){
            cout<<setw(2)<<setfill(' ')<<count<<" ";
            count-=1;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
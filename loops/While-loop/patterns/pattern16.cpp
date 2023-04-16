#include<bits/stdc++.h>
using namespace std;

// A 
// B B
// C C C

int main(){
    int i=0, j=0, n;
    char ch='A';
    cin>>n;
    while(i<n){
        j=0;
        while(j<=i){
            cout<<static_cast<char>(ch+i)<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
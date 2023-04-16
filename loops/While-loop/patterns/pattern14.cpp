#include<bits/stdc++.h>
using namespace std;

// A B C 
// D E F
// G H I

int main(){
    int i=0,j=0,n;
    cin>>n;
    char ch='A';
    while(i<n){
        j=0;
        while(j<n){
            cout<<ch<<" ";
            ch+=1;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

// A 
// B C
// D E F
// G H I J

int main(){
    int i=0, j=0, n;
    char ch='A';
    cin>>n;
    while(i<n){
        j=0;
        while(j<=i){
            cout<<ch<<" ";
            ch+=1;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
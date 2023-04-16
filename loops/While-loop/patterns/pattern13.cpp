#include <bits/stdc++.h>
using namespace std;

// A B C D 
// A B C D
// A B C D
// A B C D

int main(){
    int i=0,j=0,n;
    char ch='A';
    cin>>n;
    while(i<n){
        j=0;
        while(j<n){
            cout<<static_cast<char>(ch+j)<<" ";     //Explicit typecasting
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}

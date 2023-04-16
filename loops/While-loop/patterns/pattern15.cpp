#include<bits/stdc++.h>
using namespace std;

// A B C 
// B C D
// C D E

int main(){
    int i=0, j=0, n;
    cin>>n;
    char ch='A';
    while(i<n){
        j=0;
        while(j<n){
            cout<<static_cast<char>(ch+i+j)<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
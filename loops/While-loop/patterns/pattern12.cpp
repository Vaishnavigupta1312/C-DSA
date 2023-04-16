#include<bits/stdc++.h>
using namespace std;

// A A A 
// B B B 
// C C C

int main(){
    int i=0,j,n;
    char ch='A';
    cin>>n;
    while(i<n){
        j=0;
        while(j<n){
            // char ch='A'+i;
            // cout<<ch<<" ";
            cout<< static_cast<char>(ch+i)<<" ";        //Explicit typecasting
            j+=1;
        }
        i+=1;
        cout<<endl;

    }
}
#include<bits/stdc++.h>
using namespace std;

// D 
// C D
// B C D
// A B C D

int main(){
    int i=0,j=0,n;
    char ch='A';                //char ch='A'+n-i-1; will be starting character for each row and then we can increement
    cin>>n;
    while(i<n){
        j=0;
        while(j<=i){
            cout<<static_cast<char>(ch+n-i+j-1)<<" ";
            j+=1;

        }
        i+=1;
        cout<<endl;
    }
}
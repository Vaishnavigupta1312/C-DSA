#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n;
    //bool isPrime=1;
    cin>>n;
    for (i=2;i<n;i++){
        if (n%i ==0){
            
            //rem=0, not a prime number
            cout<<"Not a prime"<<endl;
            return 0;
            // isPrime=0;
            // break;
        }
    }
    cout<<"Prime"<<endl;
    // if(isPrime==1) cout<<"Prime"<<endl;
    // else cout<<"Not a Prime"<<endl;
    // return 0;
    
}
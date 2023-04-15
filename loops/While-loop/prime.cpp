#include <bits/stdc++.h>
using namespace std;
int main(){
    //Verifying input to be prime or not using while loop

    int n,i=2, factors=0;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<i<<" ";
            // cout<<n<<" is a Composite number"<<endl;
            i+=1;
            factors+=1;
        }
        else{
            i+=1;
        }
    }
    if(factors!=0){
        cout<<"are the factors of "<<n<<endl;
        cout<<"Hence, "<<n<<" is a composite number."<<endl;
    }
    else{
        cout<<n<<" is a prime number"<<endl;
    }
    
    
}
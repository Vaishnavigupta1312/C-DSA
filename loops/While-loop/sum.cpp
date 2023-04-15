#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cin>>n;

    // while loop

    int i=1;
    while(i<=n){            //sum of n numbers
        sum+=i;
        i+=1;
    }
    cout<<sum<<endl;
}
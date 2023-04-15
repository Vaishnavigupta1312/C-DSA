#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;;
    cin>>n;
    int i=2;
    while(i<=n){            //sum of even numbers between 1 to n.
        sum+=i;
        i=i+2;
    }
    cout<< sum <<endl;
}
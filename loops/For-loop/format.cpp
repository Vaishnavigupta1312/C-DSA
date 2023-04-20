#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++) cout<<i<<" ";
    int i=1;
    for(;;){
        if(i<=n){
            cout<<i<<" ";
        }
        else break;             //loop will continue to iterate even if the condition becomes false so we use break stop the flow
        i++;
    }
    cout<<endl;

    // we can write multiple variable arguments in for loop
    for (int a=0, b=1, c=2; a>=0 && b>=1, c>=2; a--,b--, c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    cout<<endl;
}
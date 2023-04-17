#include<bits/stdc++.h>
using namespace std;

// * * * * 
//   * * *
//     * *
//       *

int main(){
    int i=0,space,n;
    cin>>n;
    int star=n;
    while(i<n){

        // print spaces
        space=0;
        while(space<i){
            cout<<"-"<<" ";
            space+=1;
        }

        // print stars
        star=n-i;
        while(star>0){
            cout<<"*"<<" ";
            star-=1;
        }
        i+=1;
        cout<<endl;
    }
}
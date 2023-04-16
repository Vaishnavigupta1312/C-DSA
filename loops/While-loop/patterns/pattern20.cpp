#include<bits/stdc++.h>
using namespace std;

//         * 
//       * *
//     * * *
//   * * * *

int main(){
    int i=0,j=0,n;
    int space=0, star=0;
    cin>>n;
    while(i<n){
        star=0;
        space=0;
        // j=0;
        while(space<n-i){
            cout<<" "<<" ";
            space+=1;
            // j+=1;
        }
        while(star<=i){
            cout<<"*"<<" ";
            star+=1;
            // j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

//       1 
//     2 3
//   4 5 6
// 7 8 9 10

int main(){
    int i=0, j,space,num=1, n;
    cin>>n;
    while(i<n){
        
        // print spaces
        space=n-i;
        while(space>1){
            cout<<" "<<" ";
            space-=1;
        }

        // print numbers
        j=0;
        while(j<=i){
            cout<<num<<" ";
            num+=1;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

//       1 
//     2 2 
//   3 3 3 
// 4 4 4 4 

int main(){
    int i=0, space,num, n;
    cin>>n;
    while(i<n){

        // print spaces
        space=n-i;
        while(space>1){
            cout<<" "<<" ";
            space-=1;
        }

        // print numbers
        num=i+1;
        while(num>0){
            cout<<i+1<<" ";
            num-=1;
        }
        i+=1;
        cout<<endl;
    }
}
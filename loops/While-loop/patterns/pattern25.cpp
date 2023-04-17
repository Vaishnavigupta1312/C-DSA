#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 
//   2 3 4
//     3 4
//       4

int main(){
    int i=0,j,num,space,n;
    cin>>n;
    while(i<n){
       
        // print spaces
        space=0;
        while(space<i){
            cout<<" "<<" ";
            space+=1; 
        }

        // print numbers
        j=n-i;
        num=i+1;
        while(j>0){
            cout<<num<<" ";
            num+=1;
            j-=1;
        }
        i+=1;
        cout<<endl;
    }
}
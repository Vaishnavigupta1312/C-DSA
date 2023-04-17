#include<bits/stdc++.h>
using namespace std;

// 1 1 1 1 
//   2 2 2
//     3 3
//       4

int main(){
    int i=0, space=0,num, n;
    cin>>n;
    while(i<n){
        
        // print spaces
        space=0;
        while(space<i){
            cout<<" "<<" ";
            space+=1;
        }

        // print numbers
        num=i;
        while(num<n){
            cout<<i+1<<" ";
            num+=1;
        }
        i+=1;
        cout <<endl;
    }
}

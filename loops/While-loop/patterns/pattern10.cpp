#include<bits/stdc++.h>
using namespace std;

// 1         
// 2 3       
// 3 4 5     
// 4 5 6 7   
// 5 6 7 8 9 

//using only 2 variables
int main(){
    int i=0,j,n;
    cin>>n;
    while(i<n){
        j=i+1;
        while(j<((i+1)*2)){
            cout<<j<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}

// int main(){
//     int i=0, j,k,n;
//     cin>>n;
//     while(i<n){
//         k=i+1;
//         j=0;
//         while(j<=i){
//             cout<<k<<" ";
//             k+=1;
//             j+=1;
//         }
//         i+=1;
//         cout<<endl;
//     }
// }

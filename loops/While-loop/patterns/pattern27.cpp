#include<bits/stdc++.h>
using namespace std;

//       1 
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

int main(){
    int i=1, space_1,num_1,num_2, n;
    cin>>n;
    while(i<=n){

        // print spaces
        space_1=n-i;
        while(space_1>0){
            cout<<" "<<" ";
            space_1-=1;
        }

        // print 1st triange of numbers
        num_1=1;
        while(num_1<=i){
            cout<<num_1<<" ";
            num_1+=1;
        }

        // print 2nd triangle of numbers
        num_2=i-1;
        while(num_2>0){
            cout<<num_2<<" ";
            num_2-=1;
        }
        i+=1;
        cout<<endl;



    }
}
#include <bits/stdc++.h>
using namespace std;

// 1 2 3 4 5 5 4 3 2 1 
// 2 3 4 5 * * 4 3 2 1
// 3 4 5 * * * * 3 2 1
// 4 5 * * * * * * 2 1
// 5 * * * * * * * * 1 

int main(){
    int i=1, num_1, star, num_2, n;
    cin>>n;
    while(i<=n){

        // print num_1
        num_1=i;
        while(num_1<=n){
            cout<<num_1<<" ";
            num_1+=1;
        }

        // print stars
        star=2*(i-1);
        while(star>0){
            cout<<"*"<<" ";
            star-=1;
        }

        //print num_2
        num_2=n-i+1;
        while(num_2>0){
            cout<<num_2<<" ";
            num_2-=1;
        }
        i+=1;
        cout<<endl;
    }
}
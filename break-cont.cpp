#include <bits/stdc++.h>
using namespace std;

int main(){

    // break statement - to come out of a loop
    for (int i=0;i<=5;i++){
        cout<<i<<" ";
        if(i==4) break;               //comes out of the loop, no iterations are performed after break
    }
    cout<<endl;


    // continue statement - to skip an iteration of the current loop
    for (int i=1; i<=5; i++){
        cout<<"HI"<<endl;
        cout<<"HEllo"<<endl;
        continue;                      //makes the code after it unreachable, and skips the present iteration, starts fresh from the next iteration
        cout<<"Mai print nahi hounga"<<endl;
        
    }
}

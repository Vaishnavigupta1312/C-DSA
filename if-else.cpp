#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a;
    // cin >> a;

    // //if a is positive.
    // if(a>0){
    //     cout<< a << " is positive."<<endl;
    // }
    // //if a is negative or 0.
    // else{
    //     cout<< a << " is negative."<<endl;
    // }
    
    int a, b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    if (a>b){
        cout<<"A is greater."<<endl;
    }
    else if (b>a){
        cout<<"B is greater."<<endl;
    }
    else {
        cout<<"Both are equal."<<endl;
    }

    int k;
    k=cin.get();    //cin.get() takes enter, space, tab also as char input, these are known as whitespace characters
    cout<< "Value of k is "<<k<<endl;

    char ch;
    cin>>ch;
    if((ch>='A')&& (ch<='Z')){                  //we can alo use ASCII values in place of ' '
        cout<< ch<< " is UPPERCASE alphabet"<<endl;
    }
    else if((ch>='a')&&(ch<='z')){
        cout<< ch<< " is lowercase alphabet"<<endl;
    }
    else if((ch>='0')&& (ch<='9')){
        cout<< ch<< " is a counting number."<<endl;
    }



}
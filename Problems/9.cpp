// https://leetcode.com/problems/palindrome-number/
//9. Palindrome Number
// Given an integer x, return true if x is a palindrome, and false otherwise.

#include <bits/stdc++.h>
using namespace std;

// Approach-1
// When the input is of integer type (), changing it to a string and comparing one char from first and one from last
bool isPalindrome(int x) {
    
    bool check=true;
    string str= to_string(x);
    int size= str.size();
    for(int i=0;i<=size/2; i++){
        // cout<<str[i]<<" "<<str[size-i+1]<<endl;
        if (str[i]!=str[size-i-1]) {
            check=!check;
            break;
        }
    }
    return check;
}
int main(){
    int x;
    cin>>x;
    int ans=isPalindrome(x);
    if (ans==1) cout<< "Is a palindrome";
    else cout<<"Is not a palindrome";

}
//Approach-2
//When the input is of integer type (num) , store it's reverse is another int type variable (reverse) and compare both the variables (num==reverse)
/*bool isPalindrome(int x) {

    int digit, reverse=0, num=x;
    bool check=true;
    if(x<0) return !check;
    while(x!=0){
        if(reverse<=INT_MAX/10 && reverse>=INT_MIN/10){
        digit= x%10;
        reverse=reverse*10+digit;
        }
        x=x/10;
    }
    // cout<<reverse;
    if (num==reverse) return check;
    else return !check;
}
int main(){
    int x;
    cin>>x;
    int ans=isPalindrome(x);
    if (ans==1) cout<< "Is a palindrome";
    else cout<<"Is not a palindrome";

}*/


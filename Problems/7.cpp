// https://leetcode.com/problems/reverse-integer/
// 7. Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    int digit;
    int rev=0;
    while(x!=0){
        digit=x%10;
        if (rev>=INT_MAX/10 || rev<=INT_MIN/10) return 0; //checks for integer underflow and overflow
        rev=(rev*10)+digit;
        x=x/10;
    }
    return rev;
}
int main(){
    int x, rev=0;
    cin>>x;
    int check= reverse(x);
    if (check ==0 && x!=0) cout<<"Integer overflow or underflow"<<endl;
    else cout<<check<<endl;
    return 0;
}
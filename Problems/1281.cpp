// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// 1281. Subtract the Product and Sum of Digits of an Integer
// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0, product=1, n, digit;
    cin>>n;
    while(n!=0){
        digit=n%10;
        sum+=digit;
        product*=digit;
        n/=10;
    }
    cout<<product-sum<<endl;

}
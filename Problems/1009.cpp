// https://leetcode.com/problems/complement-of-base-10-integer/
// 1009. Complement of Base 10 Integer
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.Given an integer n, return its complement.
#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n)
{
    int i = 0, bit, rev, ans = 0;
    if(n==0) return 1;
    while (n != 0)
    {
        bit = n & 1;
        if (bit == 0)
            rev = 1;
        else if(bit==1)
            rev = 0;
        ans = rev * pow(2, i) + ans;
        i++;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int check= bitwiseComplement(n);
    cout<<check;
    return 0;
}
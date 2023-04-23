// https://leetcode.com/problems/number-of-1-bits/
// 191. Number of 1 Bits
// Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

#include<bits/stdc++.h>
using namespace std;

// taking input as binary string representation of n
int main(){
    string n;
    cin>>n;
    uint32_t num= std::stoi(n,0,2);         //on leetcode the input is directly given in binary representation whereas here we are taking n as a decimal number using cin, so we are converting the binary input to integer first .........and then performing the operations
    int counter=0;
    while(num!=0){
        if(num&1==1){
            counter++;
        }
        num=num>>1;
        cout<<num<<endl;
    }
    cout<<counter;
}

//  input is an unsigned integer but with decimal operations ----wrong
// int main(){
//     uint32_t n;
//     int counter=0;
//     cin>>n;
//     while(n!=0){
//         if(n%10==1){
//             counter++;
//         }
//         n/=10;
//         cout<<n<<endl;
//     }
//     cout<<counter;
// }


/* If the input would have been a string
int main(){
    string n;
    cin>> n;
    int i=31, counter=0;
    while(i>=0){
        // cout<<n[i]<<" ";
        if(n[i]=='1'){
            counter+=1;
            // std::cout<<"hello";
        }
        i--;
    }
    cout<<counter;
}
*/
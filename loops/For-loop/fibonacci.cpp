#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0, sum=1, n;
    cin>>n;
    if (n==0) return 0;                 //incase user wants to print 0 fibonacci numbers
    if (n==1){                          //user wants to print single fibonacci number
        cout<<a<<endl;
        return 0;
    }
    if(n==2){                           //user wants to print two fibonacci numbers
        cout<<a<<" "<<endl;
        return 0;
    }
    else{
        cout<<a<<" "<<sum<<" ";         //when user wants to print 'n' numbers of fibonacci series 
        for(int i=2;i<=n;i++){          //using 2 variables- a, sum
            sum+=a;
            a=sum-a;
            cout<<sum<<" ";
        }
    }
}


// int main(){
//     int a=0, b=1, sum=0, n;
//     cin>>n;
//     if (n==0) return 0;             //incase user wants to print 0 fibonacci numbers
//     if (n==1){                      //user wants to print single fibonacci number
//         cout<<a<<endl;
//         return 0;
//     } 
//     if (n==2){
//         cout<<a<<" "<<b<<endl;      //user wants to print two fibonacci numbers
//     }
//     else {
//         cout<<a<<" "<<b<<" ";
//         for (int i=3;i<=n;i++){     //when user wants to print 'n' numbers of fibonacci series 
//             sum=a+b;                //using 3 variables- a,b,sum
//             a=b;
//             b=sum;
//             cout<<sum<<" ";
//         }

//     }
    
// }
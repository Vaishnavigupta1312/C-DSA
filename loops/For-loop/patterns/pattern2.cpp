#include<bits/stdc++.h>
using namespace std;

// *                 * 
// * *             * *
// * * *         * * *
// * * * *     * * * * 
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * * 
// *                 *      n=5

int main(){
    int i=1,star_1,space_1, star_2,n;
    cin>>n;
    for(i=1;i<=(2*n)-1;i++){

        // print 1st star triangle
        star_1=i;
        if (i>n) star_1=(2*n)-i;
        for(;star_1>0; star_1--){
            cout<<"*"<<" ";
        }

        // print spaces
        space_1=2*(n-i);
        if(i>n) space_1= 2*(i-n);
        for (;space_1>0;space_1--){
            cout<<" "<<" ";
        }

        // print 2nd star triangle
        star_2=i;
        if(i>n) star_2=(2*n)-i;
        for(;star_2>0;star_2--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
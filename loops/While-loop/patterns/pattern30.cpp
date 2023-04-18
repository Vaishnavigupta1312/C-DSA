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
    int i=1,star_1,space_1,star_2,n;
    cin>>n;
    while(i<=2*n-1){

        // print 1st star triangle
        star_1=i;
        if(i>n) star_1=2*n-i ;
        while(star_1>0){
            cout<<"*"<<" ";
            star_1-=1;
        }

        // print spaces
        space_1=2*(n-i);
        if(i>n) space_1=2*(i-n);
        while(space_1>0){
            cout<<" "<<" ";
            space_1-=1;
        }

        // print 2nd star triangle
        star_2=i;
        if(i>n) star_2=2*n-i;
        while(star_2>0){
            cout<<"*"<<" ";
            star_2-=1;
        }
        i+=1;
        cout<<endl;

    }
}
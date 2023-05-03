#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n= nums.size();
        int ans=1;
        for (int i =0; i<n; i++){
            if (nums[i]==0) return 0;
            else if (nums[i]<0) ans*=(-1);
        }
        if (ans>0) return 1;
        else return (-1);
    
    }
};

int main(){
    int val,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    vector<int> nums(n);
    for(int i =0; i<n; i++){
        cin>>nums[i];
    }
    Solution sol;
    int result= sol.arraySign(nums);
    cout << "The sign of the product of elements is " << result << endl;
    return 0;

}
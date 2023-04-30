// https://leetcode.com/problems/single-number/submissions/942179856/
// 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
#include<bits/stdc++.h>
using namespace std;

// uses XOR gate which gives 0 when same output else returns the number , 5^5=0, 5^6^6=5
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size=nums.size();
        int i=0, ans=0;
        while(i<size){
            ans^=nums[i];
            i++;
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>> nums[i];
    }
    Solution s;
    int ans1 = s.singleNumber(nums);

    cout << "The single number is: " << ans1 << endl;

    return 0;
}
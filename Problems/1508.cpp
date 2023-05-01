// https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
// 1508. Range Sum of Sorted Subarray Sums

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

// approach, taking the sum of subarrays and storing in a new vector "ans", sorting it and returning the sum of elements between left and right
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int i=0, j;
        long long final_answer=0;
        vector<int> ans;
        for(i=0;i<n;i++){
            int sum=0;
            for(j=i;j<n;j++){
                sum+=nums[j];
                ans.push_back(sum);
            }
        }
        
        sort(ans.begin(),ans.end());
    
        auto it= (ans.begin()+left);
        for (it=ans.begin()+left-1; it<=ans.begin()+right-1; it++){
            // cout<<*it<<" ";
            final_answer+=*it;
        }
        final_answer%= (long long)pow(10,9)+7;
        return final_answer;
    }
};

int main() {
    int n, left, right;
    vector<int> nums;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cout << "Enter left and right indices: ";
    cin >> left >> right;
    Solution sol;
    int result = sol.rangeSum(nums, n, left, right);
    cout << "Range sum is: " << result << endl;
    return 0;
}
/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int max_len = INT_MIN;
        int sum = 0;

        //optimal approach
        for(int i=0;i<n;i++)
        {
            if(sum<0)
            {
                sum = 0;
                max_len = max(max_len,nums[i]);
            }
            sum += nums[i];
            max_len = max(max_len,sum);
        }

        return max_len;
    }
};
// @lc code=end


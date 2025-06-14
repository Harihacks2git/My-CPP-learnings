/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();

        //Brute Force
        // int res = INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     int count = 0;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(nums[i] == nums[j])
        //         count++;
        //     }
        //     if(count > n/2)
        //     res = nums[i];
        // }
        // return res;

        //Better approach using hashmap for storing frequency TC: O(n) SC: O(n)
        // unordered_map<int,int> map;
        // for(auto it:nums)
        // {
        //     map[it]++;
        //     if(map[it] > (n/2))
        //     return it;
        // }
        // int max_freq = INT_MIN;
        // int element = INT_MIN;
        // for(auto it: map)
        // {
        //     if(max_freq < it.second)
        //     {
        //         max_freq = it.second;
        //         element = it.first;
        //     }
        // }
        // return element;

        //optimal solution by repeated counting and decounting to find majority

        int count = 0;
        int element = INT_MIN;
        for(auto it: nums)
        {
            if(count == 0)
            element = it;

            if(element == it)
            count++;
            else
            count--;
        }
        return element;
    }
};
// @lc code=end


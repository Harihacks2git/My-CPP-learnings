/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            vector<int> result;
            // Bruteforce 
            // for(int i=0;i<n;i++)
            // {
            //     int sum = nums[i];
            //     for(int j=i+1;j<n;j++)
            //     {
            //         sum += nums[j];
            //         if(sum == target)
            //         {
            //             result.push_back(i);
            //             result.push_back(j);
            //             return result;
            //         }
            //         else
            //         {
            //             sum -= nums[j];
            //         }
            //     }
            // }
            // return {-1,-1};

        //Better (optimal for index returning) approach using hashmap TC: O(n) SC: O(n)
        //     unordered_map<int,int> map;
        //     for(int i=0;i<n;i++)
        //     {
        //         if(map.find(target-nums[i])!= map.end())
        //         {
        //             return {map[target-nums[i]],i};
        //         }
        //         map[nums[i]] = i;
        //     }
        //     return {-1,-1};
        // }

        //Optimal using two pointers

        vector<pair<int,int>> arr;

        for(int i=0;i<n;i++)
        {
            arr.push_back({nums[i],i});
        }
        int min = 0;
        int max = n-1;
        sort(arr.begin(),arr.end());

        // for(auto it: nums)
        // cout<<it<<" ";
        // cout<<endl;
        while(min<=max)
        {
            if(arr[min].first+arr[max].first == target)
            return {arr[min].second,arr[max].second};

            else if(arr[min].first+arr[max].first > target)
            max--;

            else
            min++;
        }
        return {-1,-1};
    };
};
// @lc code=end


/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void swap(int &x,int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        //Better approach using counter variables

        int c0=0,c1=0,c2=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
                c0++;
            else if(nums[i] == 1)
                c1++;
            else
                c2++;
        }

        for(int i=0;i<c0;i++)
            nums[i] = 0;
        for(int i=c0;i<c0+c1;i++)
            nums[i] = 1;
        for(int i=c0+c1;i<c0+c1+c2;i++)
            nums[i] = 2;


        // //Optimal using three pointer approach

        // int low = 0,mid = 0, high = n-1;

        // while(mid<=high)
        // {
        //     if(nums[mid] == 0)
        //     {
        //         swap(nums[low++],nums[mid++]);
        //     }
        //     else if(nums[mid] == 1)
        //     {
        //         mid++;
        //     }
        //     else
        //     {
        //         cout<<nums[high]<<" "<<nums[mid]<<endl;
        //         swap(nums[high--],nums[mid]);
        //     }
        // }
    }
};
// @lc code=end


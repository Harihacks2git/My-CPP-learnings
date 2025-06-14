#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution
{
    public:
    int maxSubarraySumLength(vector<int> &arr,int k)
    {
        int n = arr.size();
        unordered_map<int,int> prefixsum;  //used to store prefix sum for every specific index to calculate the length
        int sum = 0;
        int max_len = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum == k)
            max_len = max(max_len,i+1);

            if(prefixsum.find(sum-k) != prefixsum.end())
            {
                int len = i - prefixsum[sum-k];
                max_len = max(max_len,len);
            }
            if(prefixsum.find(sum) == prefixsum.end())
            {
                prefixsum[sum] = i;
            }
        }
        // cout<<endl;
        // for(auto it: prefixsum)
        // {
        //     cout<<it.first<<" - "<<it.second<<endl;
        // }
        return max_len;
    }
};

int main()
{
    Solution s;
    vector<int> t1 = {1,2,3,1,1,1,4,2,3};
    vector<int> t2 = {10,5,2,7,1,-10};
    vector<int> t3 = {-1,1,1};
    vector<int> t4 = {2,0,0,3};

    cout<<endl;
    for(auto it: t1)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: t2)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: t3)
    {
        cout<<it<<" ";
    }
    cout<<"\n Max len : "<<s.maxSubarraySumLength(t1,3);
    cout<<"\n Max len : "<<s.maxSubarraySumLength(t2,15);
    cout<<"\n Max len : "<<s.maxSubarraySumLength(t3,1);
    cout<<"\n Max len : "<<s.maxSubarraySumLength(t4,2)<<endl;
}
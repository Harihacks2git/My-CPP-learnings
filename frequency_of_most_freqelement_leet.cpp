#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
class Solution
{
    public:
        int maxFrequency(vector<int> &nums,int k)
        {
            // int n = nums.size();
            // int i=0;
            // while(k>0)
            // {
            //     if(i!=n||nums[i]<nums[i+1])
            //     {
            //         nums[i]++;
            //         k--;
            //     }
            //     else
            //     {
            //         i++;
            //     }
            // }
            // map<int,int> freq;
            // for(int i=0;i<n;i++)
            // {
            //     freq[nums[i]]++;
            // }
            
            // cout<<"\n Frequency of the elements are : "<<endl;
            // for(auto it: freq)
            // cout<<it.first<<" -> "<<it.second<<endl;
            // int ans=1;
            // for(auto it: freq)
            // {
            //     ans = it.second;
            //     for(auto j: freq)
            //     {
            //         if(ans < j.second)
            //         ans = j.second;
            //     }
            // }
            // return ans;
            sort(nums.begin(),nums.end());
            int n = nums.size();
            int left=0;
            int right=0;
            int ans = 0;
            int total = 0;

            while(right<n)
            {
                total  = total + nums[right];

                while(nums[right]*(right-left+1)>total + k)
                {
                    total = total - nums[left];
                    left++;
                }
                ans = max(ans,(right-left+1));
                right++;
            }
            return ans;
        }
};
int main()
{
    int n;
    cout<<"\n Enter the number of elements : ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];

    int k;
    cout<<"\n Enter the atmost number of increment operations (k) : ";
    cin>>k;

    Solution ob;
    int ans = ob.maxFrequency(nums,k);
    cout<<"\n Answer : "<<ans<<endl;
}
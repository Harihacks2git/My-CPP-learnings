#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution
{
    private:
        void recursive_permutation(vector<vector<int>> &res,vector<int> &nums,vector<int> &temp,vector<bool> &freq,int n)
        {
            if(temp.size() == n)
            {
                res.push_back(temp);
                return;
            }
            
            for(int i=0;i<n;i++)
            {
                if(!freq[i])
                {
                    freq[i] = true;
                    temp.push_back(nums[i]);
                    recursive_permutation(res,nums,temp,freq,n);//recursive call
                    temp.pop_back(); //need to pop the element recently added
                    freq[i] = false; //need to mark the element as not visited
                }
            }
        }
    public:
        vector<vector<int>> permute(vector<int> nums)
        {
            int n = nums.size();

            vector<vector<int>> result;
            vector<int> temp;
            vector<bool> freq(n,false);

            recursive_permutation(result,nums,temp,freq,n);

            return result;
        }
};

int main()
{
    Solution s;
    vector<int> arr = {2,1,5,4,3,0};

    vector<vector<int>> permuted_values = s.permute(arr);

    cout<<endl;
    for(auto it:permuted_values)
    {
        for(auto jt : it)
        {
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> _3sum(vector<int> nums,int K)
{

    set<vector<int>> st;
    int n = nums.size();

    for(int i=0;i<n-2;i++)
    {
        int sum = nums[i];
        for(int j=i+1;j<n-1;j++)
        {
            sum += nums[j];
            for(int k=j+1;k<n;k++)
            {
                sum += nums[k];
                if(sum == K)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k]};

                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                sum -= nums[k];
            }
            sum -= nums[j];
        }
    }

    vector<vector<int>> res(st.begin(),st.end());
    return res;
}
int main()
{
    vector<int> arr = {-1,0,1,2,-1,4};
    vector<int> t2 = {-1,0,1,0};

    vector<vector<int>> res = _3sum(t2,0);

    for(auto it:res)
    {
        for(auto jt : it)
        {
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void Permute(vector<int> nums,int pt, int n, vector<vector<int>> &res)
{
    if(pt == n)
    {
        res.push_back(nums);
        return;
    }

    for(int i=pt;i<n;i++)
    {
        swap(nums[i],nums[pt]);
        Permute(nums,pt+1,n,res);
        swap(nums[i],nums[pt]);
    }
}
int main()
{
    vector<int> arr = {1,1,5};
    vector<vector<int>> res;
    int n = arr.size();
    Permute(arr,0,n,res);

    sort(res.begin(),res.end());

    cout<<endl;

    int res_size = res.size();
    for(int i=0;i<res_size;i++)
    {
        if(res[i] == arr)
        {
            cout<<"\n Previous Permutation : ";
            if(i == 0)
            {
                for(auto it: res[res_size-1])
                cout<<it<<" ";

                cout<<endl;
            }
            else
            {
                for(auto it: res[i-1])
                cout<<it<<" ";

                cout<<endl;
            }
            cout<<"\n Next permutation : ";
            if(i == res_size-1)
            {
                for(auto it: res[0])
                cout<<it<<" ";
                cout<<endl;
            }
            else
            {
                for(auto it: res[i+1])
                cout<<it<<" ";

                cout<<endl;
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void Permute(vector<int> nums,int pt, int n, vector<vector<int>> &res)
{
    if(pt == n) //pointer meets the end
    {
        res.push_back(nums);
        return;
    }

    for(int i=pt;i<n;i++)
    {
        swap(nums[i],nums[pt]);
        Permute(nums,pt+1,n,res); // moving the pointer to the next index
        swap(nums[i],nums[pt]); // to undo the swap after result is stored to calculate the next permutations
    }
}
int main()
{
    vector<int> arr = {8,0,7,2,1};
    vector<vector<int>> result;
    int n = arr.size();
    Permute(arr,0,n,result);

    sort(result.begin(),result.end());

    cout<<"\n All possible permutations : "<<endl;
    for(auto it: result)
    {
        for(auto jt: it )
        {
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}
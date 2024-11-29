#include<bits/stdc++.h>

using namespace std;

int Finder(vector<int> &nums)
{
    //Better approach
    // map<int,int> hash;

    // int n = nums.size();

    // for(int i=0;i<n;i++)
    // {
    //     hash[nums[i]]++;
    // }

    // int res = INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     if(hash[nums[i]] == 1)
    //     res = nums[i];
    // }
    // return res;

    //optimal apprach


    int xorr = 0;

    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        xorr = xorr^nums[i];
    }
    return xorr;
}
int main()
{
    vector<int> arr = {1,2,1};

    cout<<"\n Given array : ";
    for(auto it: arr)
    {
        cout<<it<<" ";
    }

    cout<<"\n The element that appeared only once is : "<<Finder(arr)<<endl;
}
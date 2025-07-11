#include<bits/stdc++.h>
using namespace std;

int CountNoOfSubarrays(vector<int> nums,int K)
{
    int n = nums.size();
    // //Brute Force TC:O(n^2) SC:O(1)
    // int count_subarray = 0;
    // for(int i=0;i<n;i++)
    // {
    //     int sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum += nums[j];

    //         if(sum == K)
    //         count_subarray++;
    //     }
    // }

    int count_subarray = 0;
    unordered_map<int,int> freq_prefixsum;
    freq_prefixsum[0] = 1;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += nums[i];

        count_subarray += freq_prefixsum[sum-K];
        freq_prefixsum[sum]++;
    }

    return count_subarray;
}
int main()
{
    vector<int> t1 = {3,1,2,4};
    vector<int> t2 = {1,2,3};
    vector<int> t3 = {1,2,3,1,1,1,4,2,3};
    vector<int> t4 = {0,0,0,0};

    cout<<endl;
    cout<<"T1 : "<<CountNoOfSubarrays(t1,6)<<endl;
    cout<<"T2 : "<<CountNoOfSubarrays(t2,3)<<endl;
    cout<<"T3 : "<<CountNoOfSubarrays(t3,3)<<endl;
    cout<<"T3 : "<<CountNoOfSubarrays(t4,0)<<endl;

}
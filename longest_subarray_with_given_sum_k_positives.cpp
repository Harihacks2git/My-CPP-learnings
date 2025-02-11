#include<bits/stdc++.h>
using namespace std;
int LongestSubarray(vector<int> &nums, int K)
{
    
    int n = nums.size();



    int maxi = 0;

    // cout<<"\n n : "<<n;
    //map<int,int> presum;
    //Brue force approach
    // for(int i=0;i<n;i++)
    // {
    //     // int SubarraySize = 0;
    //     // int sum = 0;
    //     // for(int j=i;j<n;j++)
    //     // {
    //     //     if(sum == K)
    //     //     {
    //     //         break;
    //     //     }
    //     //     else if(sum!=K)
    //     //     {
    //     //         sum += nums[j];
    //     //         SubarraySize++;
    //     //         // cout<<endl<<"j : "<<j<<" sum : "<<sum<<" Sub : "<<SubarraySize;
    //     //     }


    //     //}

    //     //O(n3)
    //     // for(int j=i;j<n;j++)//subarry end index
    //     // {
    //     //     int Subarraysize = 0;
    //     //     int sum = 0;
    //     //     // cout<<"\n j : "<<j;
    //     //     // cout<<"\nSubarray : ";
    //     //     for(int k=i;k<=j;k++)
    //     //     {
    //     //         // cout<<nums[k]<<" ";
    //     //         sum += nums[k];
    //     //     }
    //     //     if(sum == K)
    //     //     maxi = max(maxi,j-i+1);
    //     // }

    //     //O(n2)
    //     // int sum = 0;
    //     // int j;
    //     // for(j=i;j<n;j++)
    //     // {
    //     //     sum += nums[j];
    //     // if(sum == K)
    //     // maxi = max(maxi,j-i+1);            
    //     // }

    //     //Better approach using hashmap (optimal for both +ves, -ves and zeroes)
    //     // sum += nums[i];

    //     // if(sum == K)
    //     // {
    //     //     maxi = max(maxi,i+1);
    //     // }

    //     // int rem = sum - K;

    //     // if(presum.find(rem) != presum.end())
    //     // {
    //     //     int len = i - presum[rem];
    //     //     maxi = max(maxi,len);
    //     // }
    //     // if(presum.find(sum) == presum.end()) //This line prevents overwriting of the index in-case of handling 0s (2,0,0,3)
    //     // { 
    //     //     presum[sum] = i; 
    //     // }
    // }
    int sum = 0;
    int left = 0;
    int right = 0;

    cout<<"Debug : "<<endl;
    //Optimized for only +ves and 0s
    while(right<n)
    {
        sum += nums[right];
        while(left<=right && sum > K)
        {
            sum -= nums[left++];
        }
        if(sum == K)
        {
            maxi = max(maxi,right-left+1);
        }
        cout<<"left : "<<left<<" right : "<<right<<endl;
        cout<<"arr[left] : "<<nums[left]<<" arr[right] : "<<nums[right]<<endl;
        cout<<"sum : "<<sum<<" len : "<<right-left+1<<" maxlen : "<<maxi<<endl;

        right++;
    }
    return maxi;
}
int main()
{
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    vector<int> arr2 = {2,0,0,3};
    vector<int> arr3 = {1,2,3,1,1,1,1,3,3};    
    cout<<"\n The given vector is  : ";
    for(auto it: arr)
    cout<<it<<" ";

    cout<<"\n The longest subarray size is : "<<LongestSubarray(arr,15)<<endl;
    cout<<"\n The longest subarray size is : "<<LongestSubarray(arr2,3)<<endl;
    cout<<"\n The longest subarray size is : "<<LongestSubarray(arr3,6)<<endl;
}
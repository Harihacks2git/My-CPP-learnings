#include<iostream>
#include<climits>
#include<vector>
#include<map>
using namespace std;

int FindMissingNo(vector<int> &nums)
{
    //works only if the elements are in sorted order and if any elements has missed inbetween
    // int n = arr.size();

    // int i=0;
    // int j=1;

    // int result = INT_MIN;
    // while(j<n)
    // {
    //     if(arr[j]-arr[i] > 1)
    //     result = arr[i] + 1;
    //     i++;
    //     j++;
    // }
    // return result;


    //Brute Force
    //  int n = nums.size();
    //  map<int,int> hash;
    //  for(int i=0;i<n;i++)
    //  {
    //     hash[nums[i]]++;
    //  }
    //  int res;
    //  for(int i=0;i<=n;i++)
    //  {
    //     if(hash[i] == 0)
    //     {
    //         res = i;
    //         break;
    //     }
    //  }   
    //  return res;


}
int main()
{
    vector<int> arr = {1,3};

    cout<<"\n Given array : ";
    for(auto it: arr)
    {
        cout<<it<<" ";
    }

    cout<<"\n The missing element is : "<<FindMissingNo(arr)<<endl;
}
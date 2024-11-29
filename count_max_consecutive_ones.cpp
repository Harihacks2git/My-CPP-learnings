#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int CountMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();

    int count = 0;
    int res = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(nums[i] == 1)
        {
            count++;
        }
        else
        {
            if(count > res)
            res = count;
            
            count = 0;
        }
    }
    res = max(res,count);
    return res;

}
int main()
{
    vector<int> arr = {1,1,0,1,1,1};

    cout<<"\n The given array is : ";
    for(auto it: arr)
    {
        cout<<it<<" ";
    }

    cout<<"\n The maximum Consecutive ones is : "<<CountMaxConsecutiveOnes(arr)<<endl;
}
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int maximumSumSubarray(vector<int> &arr)
{
    int n = arr.size();
    int max_sum = INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     int sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum += arr[j];
    //         max_sum = max(max_sum,sum);
    //     }
    // }
    int sum = 0;

    pair<int,int> in ={-1,-1};
    int start=-1;
    for(int i=0;i<n;i++)
    {
        

            if(sum==0)
            {
                start = i;
            }
            sum += arr[i];
            if(sum >  max_sum)
            {
                max_sum = sum;
                in.first = start;
                in.second = i;
            }
            if(sum<0)
            {
                sum = 0;
                if(max_sum < arr[i])
                max_sum = arr[i];
            }   
    }

    // cout<<"The subArray is : ";
    // for(int i=in.first;i<=in.second;i++)
    // cout<<arr[i]<<" ";
    return max_sum;
}
int main()
{
    vector<int> t1 = {-2,-3,4,-1,-2,1,5,-3};
    vector<int> t2 = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> t3 = {2,-3,1,-2,4,-1,5};
    vector<int> t4 = {-4,-2,-3,-1};

    cout<<"T1 : "<<maximumSumSubarray(t1)<<endl;
    cout<<"T2 : "<<maximumSumSubarray(t2)<<endl;
    cout<<"T3 : "<<maximumSumSubarray(t3)<<endl;
    cout<<"T4 : "<<maximumSumSubarray(t4)<<endl;   
}
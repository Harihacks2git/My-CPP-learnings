#include<bits/stdc++.h>
using namespace std;

int FindSubarrayCount(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    //Brute-force approach
    // for(int i=0;i<n;i++)
    // {
    //     int sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum += arr[j];

    //         if(sum == 0)
    //         count++;
    //     }
    // }

    // int left = 0;
    // int right = 0;

    // int sum = 0;
    // while(right<n)
    // {
    //     sum += arr[right];  
    //     while(left<=right && sum>=0)
    //     {
    //         sum -= arr[left++];
    //     }

    //     if(sum == 0)
    //     count++;
    //     right++;
    // }

    map<int,int> PresumFreq;

    PresumFreq[0] = 1;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];

        if(PresumFreq.find(sum) != PresumFreq.end())
        {
            count += PresumFreq[sum];
        }
        PresumFreq[sum]++;
    }
    return count;
}
int main()
{
    vector<int> test1 = {0,0,5,5,0,0};
    vector<int> test2 = {6,-1,-3,4,-2,2,4,6,-12,-7};
    vector<int> test3 = {0};
    vector<int> test4 = {4,5,8,2,3,10,7,5,7,1};

    cout<<"Test 1 : "<<FindSubarrayCount(test1)<<endl;
    cout<<"Test 2 : "<<FindSubarrayCount(test2)<<endl;
    cout<<"Test 3 : "<<FindSubarrayCount(test3)<<endl;
    cout<<"Test 4 : "<<FindSubarrayCount(test4)<<endl;
}
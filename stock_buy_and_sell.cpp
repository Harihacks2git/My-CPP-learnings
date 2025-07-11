#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int maxProfit(vector<int> &arr)
{
    int n = arr.size();

    // int max_profit = 0;
    // for(int i=0;i<n;i++)
    // {
    //     int profit = 0;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         profit = arr[j] - arr[i];
    //         if(profit > max_profit)
    //         max_profit = profit;
    //     }
    // }

    int min_price = INT_MAX;
    int max_profit = 0;
    for(int i=0;i<n;i++)
    {
        if(min_price > arr[i])
        min_price = arr[i];

        if(arr[i]-min_price > max_profit)
        max_profit = arr[i]-min_price;
    }
    return max_profit;
}
int main()
{
    vector<int> t1 = {7,1,5,3,6,4};
    vector<int> t2 = {7,6,4,3,1};

    cout<<"Maximum profit : "<<maxProfit(t1)<<endl;
    cout<<"Maximum profit : "<<maxProfit(t2)<<endl;
}
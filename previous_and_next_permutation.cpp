#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// void Permute(vector<int> nums,int pt, int n, vector<vector<int>> &res)
// {
//     if(pt == n)
//     {
//         res.push_back(nums);
//         return;
//     }

//     for(int i=pt;i<n;i++)
//     {
//         swap(nums[i],nums[pt]);
//         Permute(nums,pt+1,n,res);
//         swap(nums[i],nums[pt]);
//     }
// }
void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    //Brute Force TC: O(n!xn) SC: O(n)
    // vector<int> arr = {2,1,5,4,3,0};
    // vector<vector<int>> res;
    // int n = arr.size();
    // Permute(arr,0,n,res);

    // sort(res.begin(),res.end());

    // cout<<endl;

    // int res_size = res.size();
    // for(int i=0;i<res_size;i++)
    // {
    //     if(res[i] == arr)
    //     {
    //         cout<<"\n Previous Permutation : ";
    //         if(i == 0)
    //         {
    //             for(auto it: res[res_size-1])
    //             cout<<it<<" ";

    //             cout<<endl;
    //         }
    //         else
    //         {
    //             for(auto it: res[i-1])
    //             cout<<it<<" ";

    //             cout<<endl;
    //         }
    //         cout<<"\n Next permutation : ";
    //         if(i == res_size-1)
    //         {
    //             for(auto it: res[0])
    //             cout<<it<<" ";
    //             cout<<endl;
    //         }
    //         else
    //         {
    //             for(auto it: res[i+1])
    //             cout<<it<<" ";

    //             cout<<endl;
    //         }
    //     }
    // }


    vector<int> arr = {2,1,5,4,3,0};
    int n = arr.size();
    vector<int> arr2(arr);

    //Previous Permutation
    for(int i=n-2;i>=0;i--)
    {
        if(arr2[i]>arr2[i+1])
        {
            int max_index = i+1;
            for(int j = i+1;j<n;j++)
            {
                if(arr2[j] > arr2[max_index] && arr2[j] <= arr2[i])
                {
                    max_index = j;
                }
            }
            swap(arr2[i],arr2[max_index]);
            reverse(arr2.begin()+(i+1),arr2.end());
            break;
        }
    }
    cout<<"\n Previous Permutation : ";
    for(auto it: arr2)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //Next Permutation
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1]) //calculate the breakpoint, where the graph decreases suddenly, this is the point to which the numbers are rearranged
        {
            int min_index = i+1; //stores the index of the minimum and greater or equal no to swap
            for(int j = i+1;j<n;j++)
            {
                if(arr[j]<arr[min_index] && arr[j] >= arr[i])// checks the minimum and greater or equal number to the number in the breakpoint
                {
                    min_index = j;
                }
            }
            swap(arr[i],arr[min_index]);
            reverse(arr.begin()+(i+1),arr.end());
            break;
        }
    }

    cout<<"\n Next Permutation : ";
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
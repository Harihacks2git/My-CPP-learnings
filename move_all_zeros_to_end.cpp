#include<iostream>
#include<vector>
using namespace std;

void swap(int &x,int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
}
void ShiftZeroes(vector<int>& arr)
{
    int n = arr.size();

    //Brute Force approach
    // int Zero_count = 0;
    // for(auto it:arr)
    // {
    //     if(it == 0)
    //     Zero_count++;
    // }

    // for(int i=0;i<Zero_count;i++)
    // {
    //     for(int j=0;j<n-1;j++)
    //     {
    //         if(arr[j] == 0)
    //         {
    //             if(arr[j+1] != 0)
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }


    //Optimised approach using two pointers

    int j = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if(j == -1 )
    return;

    else
    {
        for(int i = j+1;i<n;i++)
        {
            if(arr[i] != 0)
            {
                arr[j] = arr[i]; //copy the next non-zero element to the first 0th position
                arr[i] = 0; //overwrite the non-zero as 0, to avoid swapping
                j++;
            }
        }
    }
}
int main()
{
    vector<int> arr = {1,0,2,0,0,5,0,3,0,0,0,4,5,0,7,9,0,0,1};
    cout<<"\n Original array : "<<endl;
    for(auto it: arr)
    cout<<it<<" ";


    ShiftZeroes(arr);
    cout<<endl<<"After Shifting Zeroes : "<<endl;

    for(auto it: arr)
    cout<<it<<" ";
}
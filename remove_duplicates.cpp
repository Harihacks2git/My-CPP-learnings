#include<iostream>
#include<set>
#include<vector>
using namespace std;

int CalculateUniqueElements(vector<int>&arr,int n)
{
    int slow,fast;
    slow = 0;
    fast = 1;

    int count = 0;
    for(;fast<n;fast++)
    {
        if(arr[slow] != arr[fast])
        {
            // cout<<slow<<" "<<fast<<" "<<arr[fast]<<endl;
            arr[++slow] = arr[fast];
            count++;
        }
    }
    return count+1;
}
int main()
{
    vector<int> arr = {1,1,1,2,2,2,2,3,3,3,3,3,3,3,3,3,4,4,4,4,5,6,6,6,7,7};

    //Bruteforce approach
    // set<int> s;
    // for(auto it: arr)
    // {
    //     s.insert(it);
    // }

    // int unique = s.size();
    // cout<<"\n Total no of unique elements : "<<unique<<endl;
    // cout<<"\n Elements in the set : "<<endl;
    // for(auto it: s)
    // cout<<it<<" ";

    // cout<<endl;

    //optimised approach

    int size = CalculateUniqueElements(arr,arr.size());

    cout<<"\n Total no of unique elements : "<<size;
    cout<<"\n Elements in the set are : "<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
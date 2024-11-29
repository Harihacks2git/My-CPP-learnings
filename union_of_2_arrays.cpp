#include<iostream>
#include<set>
#include<vector>
using namespace std;

pair<int,vector<int>> FindUnion(vector<int>& a, vector<int>& b)
{
    //Brute force approach
    // set<int> res;
    // for(auto it: arr1)
    // {
    //     res.insert(it);
    // }
    // for(auto it: arr2)
    // {
    //     res.insert(it);
    // }

    // vector<int> result(res.begin(),res.end());
    // pair<int,vector<int>> R = {result.size(),result};
    // return R;

    //optimized approach
        int n = a.size();
        int m = b.size();
        
        vector<int> Result;
        int i=0;
        int j=0;
        int size = 0;
        while(i<n && j<m)
        {
            if(a[i] <= b[j])
            {
                if(size == 0 || Result[size-1] != a[i])
                {
                    Result.push_back(a[i]);
                    size++;
                }
                i++;
            }
            else
            {
                if(size == 0 || Result[size-1] != b[j])
                {
                    Result.push_back(b[j]);
                    size++;
                }
                j++;
            }
        }
        while(i<n)
        {
            if(Result[size-1] != a[i])
            {
                Result.push_back(a[i]);
                size++;
            }
            i++;
        }
        while(j<m)
        {
            if(Result[size-1] != b[j])
            {
                Result.push_back(b[j]);
                size++;
            }
            j++;
        }
    pair<int,vector<int>> res = {size,Result};
    return res;
}
int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3};

    cout<<"\nArray 1 : ";
    for(auto it: a)
    {
        cout<<it<<" ";
    }
    cout<<"\nArray 2 : ";
    for(auto it: b)
    {
        cout<<it<<" ";
    }
    cout<<"\nAfter union : ";
    pair<int,vector<int>> Result = FindUnion(a,b);

    cout<<"\n No of Distinct elements : "<<Result.first;
    cout<<"\n Elements : ";
    for(auto it: Result.second)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
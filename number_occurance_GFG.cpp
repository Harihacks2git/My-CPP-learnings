// Given an array arr[] of n positive integers which can contain integers from 1 to p where elements can be repeated or can be absent from the array.
// Your task is to count the frequency of all numbers from 1 to n. Do modify the array in-place changes in arr[], such that arr[i] = frequency(i) and assume 1-based indexing.

// Note: The elements greater than n in the array can be ignored for counting. 

// Examples

// Input: n = 5 arr[] = {2, 3, 2, 3, 5} p = 5
// Output: 0 2 2 0 1
// Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 2 times. 3 occurring 2 times. 4 occurring 0 times. 5 occurring 1 time.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution
{
    public:
        void frequencyCount(vector<int> &arr,int N,int P)
        {
            unordered_map<int,int> m;
            for(int i=0;i<N;i++)
            {
                if(arr[i]>P)
                continue;
                m[arr[i]]++;
            }
            for(int i=0;i<N;i++)
            {
                arr[i] = m[i+1];
            }
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,P;
        cin>>N;
        vector<int>arr(N);
        for(int i=0;i<N;i++)
        cin>>arr[i];

        cin>>P; //Maximum integer value till that can be counted

        Solution ob;
        cout<<endl;
        ob.frequencyCount(arr,N,P);
        for(int i=0;i<N;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
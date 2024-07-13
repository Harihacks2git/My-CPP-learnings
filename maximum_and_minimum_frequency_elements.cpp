//This program is to find the maximum and minimum frequency of elements in an array
#include<iostream>
#include<map>
using namespace std;
void MaxMinFrequency(int arr[],int n)
{
    map<int,int> freq;
    for(int i=0;i<n;i++)
    freq[arr[i]]++;

    cout<<"\n Frequency of elements is : "<<endl;
    // for(auto it: freq)
    // cout<<it.first<<" -> "<<it.second<<endl;
    // int max,min;
    // for(auto it: freq)
    // {
    //      max = it.first;
    //      min = it.first;
    //     for(auto j: freq)
    //     {
    //         if(j.second == it.second)
    //         continue;
    //         if(j.second>it.second)
    //         max = j.first;
    //         else
    //         min = j.first;
    //     }
    // }
    // if(freq[max] == freq[min])
    // cout<<"There is no maximum or minimum frequency element"<<endl;
    // else
    // {
    //     cout<<"\nThe Maximum frequency element is : "<<max<<endl;
    //     cout<<"The Minimum frequency element is : "<<min<<endl;
    // }

   for(auto it: freq)
    cout<<it.first<<" -> "<<it.second<<endl;
    int max,min;
    for(auto it: freq)
    {
         max = it.second;
         min = it.second;
        for(auto j: freq)
        {
            if(j.second == it.second)
            continue;
            if(j.second>it.second)
            max = j.second;
            else
            min = j.second;
        }
    }
    if(max == min)
    cout<<"There is no maximum or minimum frequency element"<<endl;
    else
    {
        cout<<"\nThe Maximum frequency element is : ";
        for(auto it: freq)
        {
            if(it.second == max)
            cout<<it.first<<" ";
        }
        cout<<endl;
        cout<<"The Minimum frequency element is : ";
        for(auto it: freq)
        {
            if(it.second == min)
            cout<<it.first<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"\n Enter the number of elements : ";
    cin>>n;
    
    int arr[n];
    cout<<"\n Enter the elements : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    MaxMinFrequency(arr,n);
}

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> hash_arr;
    int n;
    cout<<"\n Enter the number of elements : ";
    cin>>n;
    cout<<"\n Enter the values : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    //computes the occurance and stores it in the map
    for(int i=0;i<n;i++)
    {
        hash_arr[arr[i]]++;
    }

    cout<<"\n The occurance of the elements are : "<<endl;
    for(map<int,int>::iterator it = hash_arr.begin();it!=hash_arr.end();it++)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }
}
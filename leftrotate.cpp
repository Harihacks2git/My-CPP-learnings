#include<iostream>
#include<vector>
using namespace std;

void leftrotate(vector<int> &arr,int place = 0)
{
    int n = arr.size();

    //left rotation logic for 1 place
    // int temp = arr[0];

    // for(int i=0;i<n-1;i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // arr[n-1] = temp;

    //logic for any place
    place %= n;
    vector<int> temp;
    int tsize = 0;
    for(int i=0;i<place;i++)
    temp.push_back(arr[i]);

    int i;
    for(i = 0;i+place<n;i++)
    {
        arr[i] = arr[i+place];
    }
    for(auto it:temp)
    {
        arr[i++] = it;
    }
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    cout<<endl<<"Original array : ";
    for(auto it:arr)
    cout<<it<<" ";

    int place;
    cout<<"\nEnter the number of places to be rotated : ";
    cin>>place;
    leftrotate(arr,place);

    cout<<endl<<"Left Rotated array : ";
    for(auto it:arr)
    cout<<it<<" ";

    cout<<endl;
}
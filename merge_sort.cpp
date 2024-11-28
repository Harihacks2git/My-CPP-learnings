#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int low,int high,int mid)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    //to compare two halves and insert the elemenets in temp in sorted order
    while(left<=mid && right<=high)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    //insert the left half after right half is empty
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    //insert right half after left half is empty
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    //copies the temp to original array
    for(int i=low;i<=high;i++)
    arr[i] = temp[i-low];
}
void mergesort(vector<int> &arr,int low,int high)
{
    int mid = (low+high)/2;
    if(low>=high)
    return;

    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);

}
int main()
{
    int t;
    cout<<"\n Enter the number of test cases : ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"\n Enter the number of elements : ";
        cin>>n;
        cout<<"\n Value : ";
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        cout<<"\n Before sorting : "<<endl;
        for(vector<int>::iterator it = v.begin();it!=v.end();it++)
        {
            cout<<" "<<*(it);
        }
        mergesort(v,0,n-1);
        cout<<"\n Aftersorting : "<<endl;
        for(vector<int>::iterator it = v.begin();it!=v.end();it++)
        {
            cout<<" "<<*(it);
        }
    }
}
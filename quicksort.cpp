#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1) //find 1st element greater than the pivot
        i++;
        while(arr[j]>pivot && j<=low+1)//find 1st element smaller than the pivot
        j--;
        if(i<j)
        swap(arr[i],arr[j]);        
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pindex = partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}
int main()
{
    int t;
    cout<<"\n Enter the no of test cases : ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"\n Enter the number of elements : ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cout<<"\n Value : ";
            cin>>arr[i];
        }
        cout<<"\n Before sort : ";
        for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
        quicksort(arr,0,n-1);
        cout<<"\n After sort : ";
        for(int i=0;i<n;i++)
        cout<<" "<<arr[i];        
    }
}
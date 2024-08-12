#include<iostream>
using namespace std;
void swap(int &x,int &y)//3 5
{
    x = x+y; //8
    y = x-y;//8-5 y = 3
    x = x-y;// 8 - 3 = 5
    //5 3
}
void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = i;
        while(a[key]<a[key-1] && key>0)
        {    
            swap(a[key],a[key-1]);
            key--;  
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"\n Enter the values : "<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<"Unsorted array : "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    insertion_sort(a,n);
    cout<<"\nSorted array : "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
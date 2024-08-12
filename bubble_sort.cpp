#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}
void bubblesort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int didswap = 0;
        for(int j=0;j<n-i;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                didswap = 1;
            }
        }
        if(didswap == 0)
        {
            break;
        }
        //cout<<"Runs"<<endl;
    }
}
int main()
{
    int n;
    cout<<"\n Enter the number of elements : ";
    cin>>n;
    cout<<"\n Enter the values : ";

    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    bubblesort(a,n);

    cout<<"\n The sorted array is : "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    cout<<endl;
}
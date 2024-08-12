#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter the value of n :  ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int min = i<j?i:j;
            cout<<n-min+1<<" ";
        }
        for(int j=n-1;j>0;j--)
        {
            int min = i<j?i:j;
            cout<<n-min+1<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=n;j++)
        {
            int min = i<j?i:j;
            cout<<n-min+1<<" ";
        }
        for(int j=n-1;j>0;j--)
        {
            int min = i<j?i:j;
            cout<<n-min+1<<" ";
        }
        cout<<endl;
    }
}
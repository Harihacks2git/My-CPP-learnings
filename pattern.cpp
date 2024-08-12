#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter the number of lines(odd) : ";
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int k=1;k<=2*((n+1)/2-i);k++)
        cout<<"  ";
        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }
    for(int i=(n-1)/2;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int k=0;k<=n-2*i;k++)
        cout<<"  ";
        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }
}
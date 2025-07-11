#include<bits/stdc++.h>
using namespace std;

long long nCr(int n, int r)
{
    //TC: O(n)
    long long res = 1;
    for(int i=1;i<=r;i++)
    {
        res = res*n--;
        res = res/i;
    }
    return res;
}
void PrintElement(int row,int col)
{
    cout<<"\nThe Element at row "<<row<<" and col "<<col<<" of the Pascals Triangle is : "<<nCr(row-1,col-1);
}
void PrintRow(int row)
{
    //Brute force TC:O(n^2)
    // cout<<endl;
    // for(int i=0;i<row;i++)
    // {
    //     cout<<nCr(row-1,i)<<" ";
    // }
    cout<<endl;
    //Optimal TC:O(n)
    int res = 1;
    for(int i=0;i<row;i++)
    {
        if(i == 0 || i == row-1)
        {
            cout<<"1"<<" ";
        }
        else
        {
            res = res*(row-i);
            res = res/i;
            cout<<res<<" ";
        }
    }
    cout<<endl;
    
}

void PrintPascalsTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        PrintRow(i);
    }
}
int main()
{
    PrintElement(5,3);
    PrintElement(3,3);
    PrintElement(4,2);
    PrintElement(6,4);

    PrintRow(6);
    PrintRow(5);

    PrintPascalsTriangle(12);
}
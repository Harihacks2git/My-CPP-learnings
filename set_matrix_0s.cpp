#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
    
    int m = arr.size();
    int n = arr[0].size();

    int flag = true;
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(arr[i][j] == 0 && flag)
    //         {
    //             for(int k=0;k<n;k++) //making the row to 0s
    //             {
    //                 arr[i][k] = 0;
    //             }
    //             for(int k=0;k<m;k++) //making the col to 0s
    //             {
    //                 arr[k][j] = 0;
    //             }
    //             flag = false;
    //         }
    //     }
    // }

    //Brute force TC:O((m+n)(m x n)) SC: O(1)
    // vector<pair<int,int>> indices;
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(arr[i][j] == 0)
    //         {
    //             pair<int,int> temp;
    //             temp = {i,j};
    //             indices.push_back(temp);
    //         }
    //     }
    // }
    // for(auto it: indices)
    // {
    //     for(int k=0;k<n;k++) //making row to 0s
    //     {
    //         arr[it.first][k] = 0;
    //     }
    //     for(int k=0;k<m;k++) //making col to 0s
    //     {
    //         arr[k][it.second] = 0;
    //     }
    // }


    // //Better approach TC: O(mxn + mxn) SC: O(m) + O(n)
    // vector<int> row(m,0);
    // vector<int> col(n,0);

    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(arr[i][j] == 0)
    //         {
    //             row[i] = 1;
    //             col[j] = 1;
    //         }
    //     }
    // }

    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(row[i] || col[j])
    //         arr[i][j] = 0;
    //     }
    // }

    //Optimal approach

    int col_0 = 1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == 0 && j!=0)
            {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
            else if(arr[i][j] == 0 && j == 0)
            {
                col_0 = 0;
            }
        }
    }

    for(int i = m-1;i>=0;i--)
    {
        for(int j = n-1;j>=0;j--)
        {
            if(arr[0][j] == 0 || arr[i][0] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }
    if(col_0 == 0)
    {
        for(int i=0;i<m;i++)
        arr[i][0] = 0;
    }
    cout<<"\n Result : "<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
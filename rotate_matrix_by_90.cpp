#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void rotateMatrix(vector<vector<int>> &Matrix)
{
    // vector<vector<int>> temp(Matrix);

    // int m = temp.size();
    // int n = temp[0].size();

    //Brute force clock wise TC:O(n^2) SC:O(n^2)
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         Matrix[j][n-i-1] = temp[i][j];
    //     }
    // }

    // //anticlockwise
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         Matrix[n-j-1][i] = temp[i][j];
    //     }
    // }

    //Optimal approach TC:O(n^2) SC: O(1)

    int n = Matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(Matrix[i][j],Matrix[j][i]);//considering it as a  square matrix
        }
    }

    cout<<"\n Transpose matrix "<<endl;
    for(auto it:Matrix)
    {
        for(auto jt:it)
        cout<<jt<<" ";
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            swap(Matrix[j][i],Matrix[j][n-i-1]);
        }
    }

}
int main()
{
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    //vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    rotateMatrix(matrix);

    for(auto it: matrix)
    {
        for(auto jt : it)
        {
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

void printSpiralMatrix(vector<vector<int>> matrix)
{
    int m = matrix.size();//no of rows
    int n = matrix[0].size();//no of cols

    int top = 0;
    int right = n-1; //last col
    int bottom = m-1; //last row
    int left = 0;

    cout<<"The given matrix : "<<endl;
    for(auto it: matrix)
    {
        for(auto jt: it)
        cout<<jt<<"  ";
        cout<<endl;
    }
    cout<<endl;

    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++) //left to right
        {
            cout<<matrix[top][i]<<" "; 
        }
        top++;
        for(int i=top;i<=bottom;i++) // top to bottom
        {
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top<=bottom)
        {
        for(int i=right;i>=left;i--) //right to left
        {
            cout<<matrix[bottom][i]<<" ";
        }
        bottom--;
        }
        if(left<=right)
        {
        for(int i=bottom;i>top;i--) //bottom to top
        {
            cout<<matrix[i][left]<<" ";
        }
        left++;
        }
    }
    cout<<endl;
}
int main()
{
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>> t2 = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};

    vector<vector<int>> t3 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> t4 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printSpiralMatrix(matrix);
    printSpiralMatrix(t2);
    printSpiralMatrix(t3);
    printSpiralMatrix(t4);

}
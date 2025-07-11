#include<bits/stdc++.h>
using namespace std;


class PascalsTriangle
{
    private:
        int n;
        vector<vector<int>> mat;
    public:
        PascalsTriangle(int x)
        {
            n = x;
            mat = vector<vector<int>>(n,vector<int>(n,0));
        }
        void generatePascalsTriangle()
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<=i;j++)
                {
                    if(j == 0 || j == i)
                    mat[i][j] = 1;
        
                    else
                    mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
                }
            }
        }

        void displayPascalsTriangle()
        {
            this->generatePascalsTriangle();
            cout<<"\n The pascals triangle is : "<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<=i;j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void displayRow(int row)
        {
            cout<<"\nRow "<<row<<": "<<endl;

            for(int i=0;i<row;i++)
            {
                cout<<mat[row-1][i]<<" ";
            }
            cout<<endl;
        }
        void displayElement(int row,int col)
        {
            cout<<"\n The Element in the Row "<<row<<"and Col "<<col<<"is : "<<mat[row-1][col-1]<<endl;
        }
};
int main()
{
    PascalsTriangle t1 = PascalsTriangle(5);
    PascalsTriangle t2 = PascalsTriangle(1);

    t1.displayPascalsTriangle();
    t1.displayRow(5);
    t1.displayElement(5,3);
    

    t2.displayPascalsTriangle();
    t2.displayRow(1);
    t2.displayElement(1,1);


    
}
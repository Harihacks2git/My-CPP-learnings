#include<iostream>
using namespace std;
void compute_pattern(int x)
{
    for(int n=1;n<=x;n++)
    {
        cout<<n<<endl;
        if(n%2 == 0)
        {
            for(int i=0;i<n/2;i++)
            {
                for(int j=1;j<=n/2-i;j++)
                cout<<"* ";
                for(int k=0;k<2*i;k++)
                cout<<"  ";
                for(int j=1;j<=n/2-i;j++)
                cout<<"* ";
                cout<<"\n";
            }
            for(int i=1;i<=n/2;i++)
            {
                for(int j=1;j<=i;j++)
                cout<<"* ";
                for(int k=0;k<2*((n/2)-i);k++)
                cout<<"  ";
                for(int j=1;j<=i;j++)
                cout<<"* ";
                cout<<endl;
            }
        }
        else
        {
            for(int i=1;i<=(n+1)/2;i++)
            {
                for(int k=0;k<(n+1)/2-i;k++)
                cout<<"* ";
                for(int j=1;j<=2*i-1;j++)
                {
                    if(j==1||j==2*i-1)
                    cout<<"* ";
                    else
                    cout<<"  ";
                }
                for(int k=0;k<(n+1)/2-i;k++)
                cout<<"* ";
                cout<<endl;
            }
            for(int i=(n-1)/2;i>0;i--)
            {
                for(int k=0;k<=(n-1)/2-i;k++)
                cout<<"* ";
                for(int j=1;j<=2*i-1;j++)
                {
                    if(j==1||j==2*i-1)
                    cout<<"* ";
                    else
                    cout<<"  ";
                }
                for(int k=0;k<=(n-1)/2-i;k++)
                cout<<"* ";
                cout<<endl;
            }
        }   
        cout<<endl<<endl;     
    }
}
int main()
{
    int n;
    cout<<"\nEnter the number of lines : ";
    cin>>n;
    compute_pattern(n);
}
//Optimized way of finding fibonacci of nth number by storing each previous number in a vector 
//similar to recursion but it uses the last saved value
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n)
{
    vector<int> ans;
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;
    ans.insert(ans.begin(),n+1,-1);
    ans[0] = 0;
    ans[1] = 1;
    for(int i = 2;i<=n;i++)
    ans[i] = ans[i-1] + ans[i-2];
    
    return ans[n];
}
int fibo_it(int n)
{
    int a=0,b=1,c=0;
    if(n == 0 || n == 1)
    return n;
    for(int i=2;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    int n;
    cout<<"\n Enter a number : ";
    cin>>n;
    cout<<"Fibo of "<<n<<" is : "<<fibo(n);
    cout<<"\n Fibo using iteration : "<<fibo_it(n);
}
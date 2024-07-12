#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
vector<int> compute_divisors(int n)
{
    vector<int> v;
    //Brute force approach
    // for(int i=1;i<n;i++)
    // {
    //     if(n%i == 0)
    //     v.push_back(i);
    // }
    // v.push_back(n);

    //optimal approach

    for(int i=1;i<sqrt(n)+1;i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}
int main()
{
    int n;
    cout<<"\n Enter a number : ";
    cin>>n;
    vector<int> res = compute_divisors(n);
    cout<<"\n The divisors of "<<n<<" are : "<<endl;
    for(auto it:res)
    {
        cout<<it<<endl;
    }
}
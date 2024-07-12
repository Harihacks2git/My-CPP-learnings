#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check_pali(int n)
{
    //Optimal  approach Time complexity - log10(N) + 1
    int rev = 0;
    for(int temp = n;temp>0;temp/=10)
    {
        int rem = temp%10;
        rev = rev*10 + rem;
    }
    if(rev == n)
    return 1;
    return 0;
}
bool leet_isPalindrome(int x) {
    if(x==0)
    return true;
    if(x<0||x%10 == 0)
    return false;
    int temp = x;
    long int rev = 0;
    for(;temp>0;temp/=10)
    {
        rev = rev*10 + temp%10;
    }
    return(rev == x);
}
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(2);
    // for(auto it:v)
    // cout<<it<<" ";
    // cout<<endl;
    // reverse(v.begin(),v.end());
    // for(auto it:v)
    // cout<<it<<" ";
    int n;
    cout<<"\n Enter a number : ";
    cin>>n;
    if(check_pali(n))
    cout<<"\n The number "<<n<<" is Palidrome"<<endl;
    else
    cout<<"\n The number "<<n<<" is Not-Palidrome"<<endl;
}
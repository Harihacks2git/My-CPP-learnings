#include<iostream>
#include<math.h>
using namespace std;
void rev(int &);
long int leet_reverse(long int x) {
    int temp = (x<0)?-x:x;
    long int rev = 0;
    for(;temp>0;temp/=10)
    {
        int rem = temp%10;
        rev = rev*10 + rem;
    }
    if(rev > pow(2,31)-1)
    return 0;
    else if(x<0)
    return -rev;
    else
    return rev;
}
int main()
{
    int n;
    cout<<"\n Enter a number : ";
    cin>>n;
    // rev(n);
    // cout<<"\n Reverse of the given number is : "<<n;
    cout<<"\n Reverse of the given number is : "<<leet_reverse(n);
}
void rev(int &x)
{
    //Optimal approach Time complexity is log10(N) + 1
    int temp = (x<0)?-x:x;
    int rev = 0,rem = 0;
    
    for(;temp>0;temp/=10)
    {
        rem = temp%10;
        rev = rev*10 + rem;
    }
    if(x<0)
        x = -rev;
    else
        x = rev;
}
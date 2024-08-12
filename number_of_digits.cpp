#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter a number : ";
    cin>>n;
    //Brute force approach:
    // int digit = 0;
    // while(n!=0)
    // {
    //     digit++;
    //     n/=10;
    // }
    // cout<<"\n The number of digits is : "<<digit;

    //Optimal approach
    int digit = log10(abs(n)) + 1;
    cout<<"\n The number of digits is : "<<digit<<endl;
}
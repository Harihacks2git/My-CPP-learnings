#include<iostream>
using namespace std;
int GCD(int n1,int n2)
{
    if(n1 == n2)
    return n1;
    if(n1 == 1 || n2 == 1)
    return 1;
    int rem = n1%n2;
    while(rem != 0)
    {
        n1 = n2;
        n2 = rem;
        rem = n1%n2;
    }
    return n2;
}
int main()
{
    int n1,n2;
    cout<<"\n Enter number 1 & 2 : ";
    cin>>n1>>n2;
    int gcd = GCD(n1,n2);
    cout<<"\n GCD of "<<n1<<" and "<<n2<<" is : "<<gcd;
    int lcm = n1*n2/gcd;
    cout<<"\n LCM "<<n1<<" and "<<n2<<" is : "<<lcm;
}
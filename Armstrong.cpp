#include<iostream>
using namespace std;
int power(int a,int x)
{
    int pow = 1;
    for(int i=1;i<=x;i++)
    pow *= a;
    return pow;
}
int isArm(int n)
{
    int digit=0;
    for(int temp = n;temp>0;temp/=10)
    digit++;

    int cp = n;
    int sum = 0;
    while(cp>0)
    {
        int rem = cp%10;
        sum += power(rem,digit);
        cp/=10;
    }
    if(sum == n)
    return 1;
    else
    return 0;
}
int main()
{
    for(int i=1;i<10000;i++)
    {
        if(isArm(i))
        cout<<i<<endl;
    }
}
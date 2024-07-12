#include<iostream>
#include<math.h>
using namespace std;
int isPrimme(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        return 0;
    }
    return 1;
}
int main()
{
    for(int i=2;i<1000;i++)
    {
        if(isPrimme(i))
            cout<<endl<<i;
    }
}
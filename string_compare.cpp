#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"\nEnter string 1 : ";
    cin>>s1;
    cout<<"\nEnter string 2 : ";
    cin>>s2;

    if(s1.size() == s2.size())
    {
        cout<<endl;
        cout<<s1<<" and "<<s2<<" are equal";
    }
    else
    {
        if(s1.size()<s2.size())
        cout<<endl<<s2<<" is larger";
        else
        cout<<endl<<s1<<" is larger";

    }
}
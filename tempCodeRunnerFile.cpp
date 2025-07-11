#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    cout<<s1.top();
    s1.pop();
    cout<<s1.top();
}
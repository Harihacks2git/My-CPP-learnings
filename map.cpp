#include<iostream>
#include<map>
using namespace std;
int main()
{
        //key,value   
    map<int,int> m1;// key is unique
    
    //key,value
    map<int,pair<int,int>>m2;

    //key,value

    map<pair<int,int>,int> m3;

    m1[1] = 2;

    m1.insert({3,1});
    

    m3[{2,3}] = 10;

    m2[4] = {7,9};

    for(auto i:m1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m1[1]<<endl;
    cout<<m1[3]<<endl;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    vector<int> v(5,100); //5 instance of 100 will be initialized

    vector<int>v1(5,20); //5 instance of 20

    vector<int> v2(v1); //a copy of v1

    v1.emplace_back(21);
    v1.emplace_back(91);
    vector<int>::iterator i = v1.begin();

    cout<<"Vector v1 : "<<endl;
    for(;i!=v1.end();i++)
    cout<<*(i)<<" ";

    cout<<endl;
    cout<<"Vector v2 : "<<endl;
    for(vector<int>::iterator i = v2.begin();i!=v2.end();i++)
    cout<<*(i)<<" ";

    // vector<int>::iterator it = v.end(); this points some mem location next to last element
    // vector<int>::iterator it = v.rbegin();
    // vector<int>::iterator it = v.rend();


    cout<<"\n Accessing vector 2 with auto datatype : "<<endl;
    for(auto it = v2.begin();it!=v2.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<"\n Accessing vector 1 using for each" <<endl;
    for(auto it:v1)
    cout<<it<<" ";

    v1.erase(v1.begin()+1);

    cout<<"\n After deletion of v1[1]"<<endl;
    for(auto it:v1)
    cout<<it<<" ";
    v1.erase(v1.begin()+1,v1.begin()+4);
    cout<<"\n After deletion of v1[1] to v1[3]"<<endl;
    for(auto it:v1)
    cout<<it<<" ";

    //insertion

    vector<int> v3(2,100); // insert 2 instance of 100;

    v3.insert(v3.begin(),300); // 300 at start 300,100,100

    v3.insert(v3.begin()+1,2,10); // 2 instance of 10 is inserted at v3[1]
    cout<<"\n After insertion of v3"<<endl;
    for(auto it:v3)
    cout<<it<<" ";

    vector<int> copy(2,50);

    v3.insert(v3.begin()+2,copy.begin(),copy.end()); // inserting another vector in this vector at position v3[2]

    cout<<"\n After insertion of v3"<<endl;
    for(auto it:v3)
    cout<<it<<" ";

    cout<<"\n  Size of vector 3 : "<<v3.size();
    v3.pop_back();

    v.clear();//erase everything
    cout<<v.empty();
    cout<<v3.empty();
}

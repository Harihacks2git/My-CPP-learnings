#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;// unique and sorted order maintains tree structure
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(4);

    set<int>::iterator it = s.find(5); //returns iterator pointing 5
    auto it = s.find(3); 

    s.erase(4); //erase 4 and maintains sorted order

    int count = s.count(2); // return either 1 or 0 is the element exist or not

    auto it1 = s.find(2);
    auto it2 = s.find(4);

    s.erase(it1,it2); //erase from 2 to 3  in {1,2,3,4,5}


    auto it = s.lower_bound(2);
    auto it = s.upper_bound(3);


    //everything happens in log time


    multiset<int> ms;// sorted but not unique
    int count = ms.count(1); //{1,1,1,1,1} return 3

    ms.erase(ms.find(1)); //erase first occurance of 1
}
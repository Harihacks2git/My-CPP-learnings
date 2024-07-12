#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(10); //{10,5,2}
    pq.push(8); //{10,8,5,2}

    cout<<pq.top()<<endl;

    //Min heap or minimum priority queue

    priority_queue<int,vector<int>,greater<int>> p;
    p.push(5); //{5}
    p.push(2); //{2,5}
    p.push(10);//{2,5,10}
    p.push(8); //{2,5,8,10}

    cout<<p.top();
}
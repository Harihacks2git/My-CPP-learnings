#include<iostream>
#include<vector>
using namespace std;
// User function Template for C++
class Solution {
  public:
    // long long int findfact(long long n)
    // {
    //     vector<long long>v;
    //     // if(n == 1)
    //     // return 1;
    //     // else
    //     // return n*findfact(n-1);
    //     if(n <= 1)
    //     {
    //     return 1;
    //     }
    //     else
    //     {
    //         v.insert(v.begin(),n,-1);
    //         v[0] = 1; // 1!
    //         for(int i=1;i<n;i++)
    //         {
    //             v[i] = (i+1)*v[i-1];
    //         }
    //     }
    //     auto it = v.end();
    //     it--;
    //     return *(it);
    // }
    //optimized code
    vector<long long> factorialNumbers(long long n) {
        vector<long long> ans;
        long long fact = 1;
        int x = 2;
        while(fact<=n)
        {
            ans.push_back(fact);
            fact *= x;
            x++;
        }
        return ans;
    }
};
int main()
{
    int t;
    cin>>t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;

    }
    // for(int i=1;i<=t;i++)
    // {
    //     cout<<endl<<ff(i);
    // }
}
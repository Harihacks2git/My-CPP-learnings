//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int gcd(long long A, long long B)
    {
        if(A == B)
        return A;
        if(A == 1 || B == 1)
        return 1;
        if(A == 0)
        return B;
        if(B == 0)
        return A;
       long long int rem = A%B;
        while(rem > 0)
        {
            A = B;
            B = rem;
            rem = A%B;
        }
        return B;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long GCD = gcd(A,B);
        long long LCM = A*B/GCD;
        vector<long long> v;
        v.push_back(LCM);
        v.push_back(GCD);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
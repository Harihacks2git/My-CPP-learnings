//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int Firstmax = INT_MIN;
        int Secondmax = INT_MIN;
        
        //Brute force
        // for(auto it:arr)
        // {
        //     if(Firstmax<it)
        //     Firstmax = it;
        // }
        
        // for(auto it: arr)
        // {
        //     if(it != Firstmax && it>Secondmax)
        //     {
        //         Secondmax = it;
        //     }
        // }
        
        // if(Firstmax == Secondmax || Secondmax == INT_MIN)
        // return -1;
        // else
        // return Secondmax;

        //optimal
        for(auto it: arr)
        {
            if(it>Firstmax)
            {
                Secondmax = Firstmax;
                Firstmax = it;
            }
            else if(it>Secondmax && it != Firstmax)
            {
                Secondmax = it;
            }
        }
        
        if(Firstmax == Secondmax || Secondmax == INT_MIN)
        return -1;
        else
        return Secondmax;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
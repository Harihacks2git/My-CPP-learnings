#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr = {0,3,7,2,5,8,4,6,0,1};

    int n = arr.size();
    sort(arr.begin(),arr.end());

    int max_consec = 0;
    int consec = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            continue;

        }

        if(arr[i+1] - arr[i] == 1)
        {
            consec++;
        }
        else
        {
            consec = 0;
        }
        max_consec = max(consec,max_consec);
    }
    max_consec++;

    cout<<"\n Max Consecutive sequence : "<<max_consec<<endl;
}
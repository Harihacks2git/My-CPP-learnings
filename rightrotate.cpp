#include<iostream>
#include<vector>
using namespace std;
void swap(int &x,int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
}
void rightrotate(vector<int>& nums, int k) {

//  vector<int> temp;
//  int n = nums.size();
//  k %= n;

//  for(int i=n-k;i<n;i++)
//  temp.push_back(nums[i]);   

//  for(int i=n-1;i>=k;i--)
//  {
//     // cout<<" i : "<<i<<" nums["<<i<<"-"<<k<<"] : "<<nums[i-k]<<endl;
//     nums[i] = nums[i-k];
//  }

//  cout<<"Temp : "<<endl;
//  for(int i=0;i<k;i++)
//  {
//     cout<<temp[i]<<" ";
//     nums[i] = temp[i];
//  }
// }


//reverse method

int n = nums.size();
k %= n;

int dec = n-1;
int inc;
// reversing the last kth elements
for(inc=n-k;inc<dec;inc++)
{
    swap(nums[inc],nums[dec]);
    dec--;
}

inc = 0;
dec = n-k-1;

//reversing elements from begining to the last kth elements
for(;inc<dec;inc++)
{
    swap(nums[inc],nums[dec]);
    dec--;
}

inc = 0;
dec = n-1;

//reversing the entire array
for(;inc<dec;inc++)
{
    swap(nums[inc],nums[dec]);
    dec--;        
}
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    cout<<endl<<"Original array : ";
    for(auto it:arr)
    cout<<it<<" ";

    int place;
    cout<<"\nEnter the number of places to be rotated : ";
    cin>>place;

    rightrotate(arr,place);

    cout<<endl<<"Right Rotated array : ";
    for(auto it:arr)
    cout<<it<<" ";

    cout<<endl;
}
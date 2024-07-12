//Optimal approach to reverse an array
#include<iostream>
using namespace std;
void swap(int &, int &);
void reverse(int arr[],int n)
{
    int *ptr1 = arr;
    int *ptr2 = arr+n-1;
    while(ptr1<=ptr2)
    {
        swap(*ptr1++,*ptr2--);
    }
}
void swap(int &x,int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    cout<<"\n Before reverse : "<<endl;
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    cout<<"\n After reverse : "<<endl;
    reverse(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";    
}
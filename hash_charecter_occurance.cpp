#include<iostream>
using namespace std;
int hash_arr[26];
int main()
{
    for(int i=0;i<26;i++)
    hash_arr[i] = 0;
    char str[50];
    cout<<"\n Enter a string : ";
    cin.getline(str,50);
    cout<<"\n The occurance of the charecters are : "<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        //hash_arr[str[i] - 'a'] +=1; //only lower case
        if(str[i]>=65 && str[i]<=90)
        hash_arr[str[i] - 'A'] += 1; // for capital letters
        hash_arr[str[i] - 'a'] += 1; //for small letters
    }

    //case insensitive occurance counting
    for(int i=0;i<26;i++)
    {
        if(hash_arr[i] == 0)
        continue;
        cout<<(char)(i+'a')<<" - "<<hash_arr[i]<<endl;
    }
}
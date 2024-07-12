#include<iostream>
#include<string.H>
using namespace std;
bool isAnum(char x)
{
    if((int)x >= 65 && (int)x<= 65+25)
    return true;
    if((int)x >= 97 && (int)x<=97+25)
    return true;
    if((int)x >= 48 && (int)x <= 57)
    return true;
    
    return false;
}
bool isPali(string s)
{
    int left = 0;
    int right = s.length()-1;
    if(s.length() == 1)
    return true;
    while(left<=right)
    {
        while(!isAnum(s[left]))
        left++;
        while(!isAnum(s[right]))
        right--;
            // if(tolower(s[left++] != tolower(s[right--])))
            // return false
            char l = tolower(s[left++]);
            char r = tolower(s[right--]);
            cout<<l;
            if(l != r)
            return false;
    }
    return true;
}
int main()
{
    string a;
    cout<<"\n Enter a string : ";
    getline(cin,a);
    if(isPali(a))
    cout<<endl<<a<<" is Palidrome string !";
    else
    cout<<endl<<a<<" is Not-Palidrome string!";
}
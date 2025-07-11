#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2("World");
    string s3(3,'A');

    cout<<endl<<s1;
    cout<<endl<<s2;
    cout<<endl<<s3<<endl;

    string s4;
    cout<<s1.length()<<endl;
    cout<<s2.size()<<endl;
    cout<<s3.size()<<endl;
    cout<<s4.size()<<endl;

    cout<<s1.empty()<<endl;
    cout<<s4.empty()<<endl;

    s2.append("!");
    s4.append("*#*");
    cout<<s2<<endl<<s4<<endl;

    s2.insert(2,"&&&");
    cout<<s2<<endl;

    s1.erase(2,2);
    cout<<s1<<endl;

    s3.replace(1,2,"XY");
    cout<<s3<<endl;


    string s5 = "Hello World";
    cout<<s5.substr(1,3)<<endl;
    cout<<s5.find("lo")<<endl;
    cout<<s5.rfind("l")<<endl;//finds the first occurance from the reverse order
    cout<<s5.find_first_of("aeiou")<<endl; //first occurance in any of the charecters
    cout<<s5.find_first_not_of("aeiou")<<endl;//find first occurance of charecters other than these
    cout<<s5.find_last_of("aeiou");//finds the last occurance of any of the given chars

    //string comparision
    //s1 == s2
    //s1 != s2
    //s1 < s2 lexicographically
    //s1.compare(s2) returns 0 if equal
    
    string s6 = "1234";
    int x = stoi(s6);
    long long s7 = stoll("12345678");
    cout<<x<<" "<<typeid(x).name()<<endl;
    cout<<s6<<"\t"<<typeid(s6).name()<<endl;
    cout<<s7<<" "<<typeid(s7).name()<<endl;

    string s8 = to_string(1234);
    cout<<s8<<endl;


    //iteration method 1
    for(int i = 0;i < s8.length();i++)
    {
        cout<<"\n "<<s8[i];
    }

    //range based(for-each)
    cout<<endl;
    for(char c:s5)
    cout<<c<<" ";

    //for-each
    for(auto it:s5)
    cout<<it<<" ";

    s5[0] += 32;
    cout<<"\n "<<s5<<endl;

    cout<<toupper(s5[8])<<endl;
    reverse(s5.begin(),s5.end());
    cout<<endl<<s5<<endl;

    sort(s5.begin(),s5.end());//ascending
    cout<<s5<<endl;

    sort(s5.rbegin(),s5.rend());
    cout<<s5<<endl;
}
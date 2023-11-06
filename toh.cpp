#include<iostream>
#include<conio.h>
using namespace std;
int moves =0;
void Hanoi(int n,char S,char D,char I);
int main()
{
    int n;
    cout<<"\n Enter the number of discs : "<<endl;
    cin>>n;
    Hanoi(n,'A','C','B');
    cout<<"\n  Total moves : "<<moves<<endl;
    cout<<"\n\n Press any key to exit..."<<endl;
    getch();
}
void Hanoi(int n,char S,char D,char I)
{
    if(n==1)
    {
    cout<<"("<<(moves+1)<<")"<<" Move from "<<S<<" to "<<D<<endl;
    moves++;
    }
    else
    {
        Hanoi(n-1,S,I,D);
        Hanoi(1,S,D,I);
        Hanoi(n-1,I,D,S);
    }
}

#include<iostream>
using namespace std;
class Node
{
    public:
    int key;
    Node* next;
    Node(int k)
    {
        key = k;
        next = NULL;
    }
};
class linkedlist
{
    public:
        Node *head;
        linkedlist()
        {
            head = NULL;
        }
        void append(int k)
        {
            if(head == NULL)
            {
                head = new Node(k);
            }
            else
            {
                Node* temp;
                for(temp = head;temp->next != NULL; temp = temp->next);
                temp->next = new Node(k);
            }
        }
        void disp()
        {
            for(Node* temp = head;temp!=NULL;temp=temp->next)
            {
                cout<<temp->key<<endl;
            }
        }
};
class solution
{
    public:
        pair<int,int> find_kth_element(linkedlist l,int k)
        {   //brute force approach
            // int fcount = 0;
            // pair<int,int> result;
            // int f1,f2;
            // f1=f2=1;
            // for(Node* temp = l.head;temp!=NULL;temp=temp->next)
            // {
            //     if(f1)
            //     {
            //         fcount++;
            //         if(fcount == k)
            //         {
            //             result.first = temp->key;
            //             f1 = 0;
            //         }
            //     }
            //     if(f2)
            //     {
            //         Node* ptr = temp;
            //         int lcount = 0;
            //         while(ptr!=NULL && lcount != k)
            //         {
            //             lcount++;
            //             ptr = ptr->next;
            //         }
            //         if(ptr == NULL && lcount == k)
            //         {
            //             result.second = temp->key;
            //             f2=0;
            //         }
            //     }
            //     if(!f1 && !f2)
            //     break;
            // }
            

            //optimized approach
            Node* first = l.head;
            Node* last = l.head;
            int fcount=0;
            int lcount = 0;
            pair<int,int> result;
            int flag = 1;
            for(;first!=NULL;first= first->next)
            {
                if(flag)
                {
                    fcount++;
                    if(fcount == k)
                    {
                        result.first = first->key;
                        flag = 0;
                    }
                }
                else
                {
                    last = last->next;
                }
            }
            result.second = last->key;
            return result;
        }
};
int main()
{
    int t;
    cout<<"\n Enter the number of testcases : ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"\n Enter the number of elements : ";
        cin>>n;
        linkedlist l;
        for(int i=0;i<n;i++)
        {
            int k;
            cout<<"Value : ";
            cin>>k;
            l.append(k);
        }
        int k;
        cout<<"\n Enter the position to be found at front and back : ";
        cin>>k;
        solution s;
        pair<int,int> res = s.find_kth_element(l,k);
        cout<<endl<<k<<" element from front is "<<res.first;
        cout<<endl<<k<<" element from last is "<<res.second;
    }
}
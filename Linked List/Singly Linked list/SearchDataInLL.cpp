//Searching data in linked list.

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*first=NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t;
    struct Node *last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *P)
{
    if(P!=NULL)
    {
        cout<<P->data<<" ";
        display(P->next);
    }
}
int count(struct Node *p)
{
    if(p==0)
    {
        return 0;
    }
    else
    {
        return count(p->next)+1;
    }
}
int search(struct Node *p)
{
    int i=0,key;
    cout<<"\nenter the element to be searched :";
    cin>>key;
    while(i<count(first) && p!=0)
    {
        if(key==p->data)
        {
            break;
        }
        else
        {
            p=p->next;
            i++;
        }
    }
    if(i>=count(first))
    {
        cout<<"element not found !!";
    }
    else
    {
        cout<<"element is found at index :"<<i;
    }
}
int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    display(first);
    search(first);
    return 0;
}
/*
Sample Output:
10 20 30 40 50
enter the element to be searched :40
element is found at index :3
*/
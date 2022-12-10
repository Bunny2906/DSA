//Inserting elements at specified position in linked list.

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
void insert(int x,int pos)
{
    struct Node *t,*p;
    t=new Node;
    t->data=x;
    if(pos==0)
    {
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        if(p)
        {
            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
    cout<<"\n";
    cout<<"Updated LL Elements are :";
    display(first);
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    cout<<"Initial LL elements are:";
    display(first);
    insert(6,0);
    insert(7,3);
    insert(8,5);
    insert(9,6);
    return 0;
}
/*
Output:
Initial LL elements are:1 2 3 4 5
Updated LL Elements are :6 1 2 3 4 5
Updated LL Elements are :6 1 2 7 3 4 5
Updated LL Elements are :6 1 2 7 3 8 4 5       
Updated LL Elements are :6 1 2 7 3 8 9 4 5 
*/


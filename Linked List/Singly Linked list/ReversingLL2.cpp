//Reversing a linked list.
//Method-2

#include<iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node *next;
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
void reverseLL(struct Node *p)
{
    struct Node *q,*r;
    q=r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    cout<<"\nReversed LL is :";
    display(first);
}
int main()
{
    int A[]={1,2,3,4};
    create(A,4);
    display(first);
    reverseLL(first);
    return 0;
}
/*
Output:
1 2 3 4
Reversed LL is :4 3 2 1
*/


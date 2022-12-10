//Deleting element at specified position in Linked list.

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
void Delete(int pos)
{
    struct Node *p=first,*q=NULL;
    if(pos==0)
    {
        first=first->next; 
        delete p;
    }
    else if(pos > 1)
    {
        for(int i=0;i<pos-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete p;
    }
    cout<<"\nupdated LL elements are :";
    display(first);
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    Delete(4);
    return 0;
}
/*
Output:
1 2 3 4 5
updated LL elements are :1 2 3 5
*/
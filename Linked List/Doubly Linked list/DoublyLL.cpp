//Creating Doubly linked list.

#include<iostream>
using namespace std;
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=new Node;
    first->data=A[0];
    first->next=first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;       //or t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int length(struct Node *p)
{
    int l=0;
    while(p!=0)
    {
        l++;
        p=p->next;
    }
    cout<<"\nLength Of D LL is :"<<l;
}
int main()
{
    int A[]={5,10,15,20,25};
    create(A,5);
    display(first);
    length(first);
    return 0;
}
/*
Output:
5 10 15 20 25
Length Of D LL is :5
*/
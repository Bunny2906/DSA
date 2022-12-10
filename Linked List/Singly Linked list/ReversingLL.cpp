//Reversing a linked list.
//Method-1

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
int count(struct Node *p)
{
    int c=0;
    while(p!=0)
    {
        c++;
        p=p->next;
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
void reverseLL()
{
    struct Node *p=first;
    int *A;
    A=new int[count(first)];
    int i=0;
    while(p!=0)
    {
        A[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i=i-1;
    while(p!=0)
    {
        p->data=A[i--];
        p=p->next;
    }
    cout<<"\nReversed LL is :";
    display(first);
}
int main()
{
    int A[]={1,2,3,4};
    create(A,4);
    display(first);
    reverseLL();
    return 0;
}
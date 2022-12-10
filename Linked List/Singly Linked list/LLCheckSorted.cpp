// Checking whether elements of linked list are sorted or not.
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
    return c;
}
void display(struct Node *P)
{
    if(P!=NULL)
    {
        cout<<P->data<<" ";
        display(P->next);
    }
}
void checkSorted(struct Node *p)
{
    struct Node *q=NULL;
    p=first;
    p=p->next;
    int c=0;
    while(c<count(first) && p!=0 && q!=0)
    {
        if(p->data > q->data)
        {
            p=p->next;
            q=q->next;
        }
        else
        {
            c++;
        }
    }
    if(c>0)
    {
        cout<<"LL is not sorted !!";
    }
    else
    {
        cout<<"LL is sorted.\n";
    }
    display(first);
}
int main()
{
    int A[]={1,2,3,9,5,6,7,8};
    create(A,8);
    checkSorted(first);
    return 0;
}
/*
Output:
LL is not sorted.
*/

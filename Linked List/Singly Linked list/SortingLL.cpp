//Sorting elements of linked list in Ascending order.

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
void sortLL(struct Node *p)
{
    struct Node *q;
    q=new Node;
    p=first;
    while(p!=0)
    {
        q=p->next;
        while(q!=0)
        {
            if(p->data > q->data)
            {
                int temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
    cout<<"Sorted LL is :";
    display(first);
}
int main()
{
    int A[]={23,1,34,4,0,56,45,5};
    create(A,8);
    sortLL(first);
    return 0;
}
/*
Output:
Sorted LL is :0 1 4 5 23 34 45 56
*/
// Finding length of Linked List.

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
void count(struct Node *p)
{
    int c=0;
    while(p!=0)
    {
        c++;
        p=p->next;
    }
    cout<<"\nLength of LL is :"<<c;
}
int main()
{
    int A[5]={1,2,3,4,5};
    create(A,5);
    display(first);
    count(first);
    return 0;
}
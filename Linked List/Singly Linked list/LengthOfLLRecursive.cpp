//Recursive function for finding length of linked list.

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
int main()
{
    int A[5]={1,2,3,4,5};
    create(A,5);
    display(first);
    cout<<"\nlength of LL is:"<<count(first);
    return 0;
}
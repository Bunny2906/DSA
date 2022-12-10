//Deleting element at specified index in LL.

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
    cout<<"\n";
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
void Delete(int pos)
{
    struct Node *p;
    if(pos==1)
    {
        p=first;
        first=first->next;
        if(first)
        {
            first->prev=NULL; 
        }   
        delete p;    
    }
    else
    {
        p=first;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
        {
            p->next->prev=p->prev;
        }
        delete p;
    }
    display(first);
    length(first);
}
int main()
{
    int A[]={5,10,15,20,25};
    create(A,5);
    display(first);
    length(first);
    Delete(1);
    return 0;
}
/*
Output:
5 10 15 20 25
Length Of D LL is :5
10 15 20 25
Length Of D LL is :4
*/
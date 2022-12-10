//Inserting new element into circular linked list.

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*head=NULL;
void create(int A[],int n)
{
    struct Node *t,*last;
    head=new Node;
    head->data=A[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    last->next=head;
}
void Display(struct Node *p)
{
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    cout<<"\n";
}
void rDisplay(Node *p)
{
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        Display(p->next);
    }
}
void length(struct Node *p)
{
    int count=0;
    do
    {
        count++;
        p=p->next;
    }while (p!=head);
    cout<<"length of LL is :"<<count<<endl;
}
void insert(int index,int x)
{
    struct Node *p,*t;
    p=head;
    t=new Node;
    t->data=x;
    if(head==NULL)
    {
        head=t;
        head->next=head;
    }
    else if(index==0)
    {
        p=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=t;
        t->next=head;
        head=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
    Display(head);
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    Display(head);
    rDisplay(head);
    length(head);
    insert(0,6);
    length(head);
    return 0;
}
/*
Output:
1 2 3 4 5
1 2 3 4 5
length of LL is :5
6 1 2 3 4 5
length of LL is :6
*/
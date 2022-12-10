//Deleting elements from circular linked list.

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*head=NULL;
void Length(struct Node *p);
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
    Length(head);
}
void Length(struct Node *p)
{
    int count=0;
    do
    {
        count++;
        p=p->next;
    }while (p!=head);
    cout<<"length of LL is :"<<count<<endl;
}
void Delete(int pos)
{
    int x;
    Node *p,*q;
    if(pos==1)
    {
        p=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        x=head->data;
        if(p==head)
        {
            delete head;
            head=NULL;
        }
        else
        {
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else
    {
        p=head;
        for(int i=0;i<pos-2;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        delete q;
        q=p->next;
    }
    Display(head);
}
int main()
{
    int A[]={34,21,56,12,79};
    create(A,5);
    Display(head);
    Delete(4);
    return 0;
}
/*
Output:
34 21 56 12 79
length of LL is :5
34 21 56 79
length of LL is :4
*/
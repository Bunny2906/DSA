//Creating circular linked list.

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
        last->next=t;
        last=t;
    }
    last->next=head;   //This makes linked list circular.
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
    cout<<"length of LL is :"<<count;
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    Display(head);
    rDisplay(head);
    length(head);
    return 0;
}
/*
Output:
1 2 3 4 5
1 2 3 4 5
length of LL is :5
*/
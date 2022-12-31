#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*front=NULL,*rear=NULL;
void display();
void enqueue(int x)
{
    struct Node* t;
    t=new Node; 
    if(t==NULL)
    {
        cout<<"\nqueue is full !!";
    }
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
            rear->next=NULL;
        }
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}
void dequeue()
{
    struct Node *p;
    int x;
    if(front==NULL)
    {
        cout<<"\nQueue is empty !!";
    }
    else
    {
        p=front;
        x=p->data;
        front=front->next;
        free(p);
    }
    cout<<"\ndeleted "<<x<<endl;
    display();
}
void display()
{
    struct Node* p;
    p=front;
    while(p!=rear->next)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    cout<<'\n';
}
void peek(int index)
{
    struct Node *p;
    p=front;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
    }
    cout<<"\nelement at position "<<index<<" is :"<<p->data<<endl;
}
void first()
{
    if(front)
    {
        cout<<"\nfirst element is :"<<front->data;
    }
}
void last()
{
    if(front==NULL)
    {
        cout<<"\nqueue is empty !!";
    }
    else
    {
        cout<<"\nlast element is :"<<rear->data;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    //enqueue(50);
    display();
    peek(1);
    dequeue();
    first();
    last();
    return 0;
}
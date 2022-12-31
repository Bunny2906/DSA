//Implementing Stack using Linked List.
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*top=NULL;
void push(int x)
{
    struct Node* t;
    t=new Node; 
    if(t==NULL)
    {
        cout<<"\nstack overflow !!";
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
void pop()
{
    struct Node *p;
    int x=-1;
    if(top==NULL)
    {
        cout<<"\nstack underflow !!";
    }
    else
    {
        p=top;
        x=p->data;
        top=top->next;
        free(p);
    }
    cout<<"popped "<<x;
}
void display()
{
    struct Node* p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    cout<<'\n';
}
void peek(int index)
{
    struct Node *p;
    p=top;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
    }
    cout<<"\nelement at position "<<index<<" is :"<<p->data<<endl;
}
void stackTop()
{
    if(top)
    {
        cout<<"\nstack top is :"<<top->data;
    }
}
void isEmpty()
{
    if(top==NULL)
    {
        cout<<"\nstack is empty !!";
    }
    else
    {
        cout<<"\nstack is not empty";
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    peek(1);
    pop();
    stackTop();
    isEmpty();
    return 0;
}
/*
Output:
30
20
10

element at position 1 is :30
popped 30
stack top is :20
stack is not empty
*/

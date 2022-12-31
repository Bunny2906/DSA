#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
class Stack
{
    private:
        Node *top;
    public:
        Stack(){top=NULL;}
        void push(int x);
        void pop();
        void peek(int index);
        void display();
        void isEmpty();
        void stackTop();
};
void Stack::push(int x)
{
    Node* t;
    t=new Node; 
    if(t==NULL)
    {
        cout<<"stack overflow !!";
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
void Stack::pop()
{
    Node *p;
    int x=-1;
    if(top==NULL)
    {
        cout<<"stack underflow !!";
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
void Stack::display()
{
    Node* p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    cout<<'\n';
}
void Stack::peek(int index)
{
    Node *p;
    p=top;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
    }
    cout<<"\nelement at position "<<index<<" is :"<<p->data<<endl;
}
void Stack::isEmpty()
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
void Stack::stackTop()
{
    if(top)
    {
        cout<<"\nstack top is :"<<top->data;
    }
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.peek(2);
    s.isEmpty();
    //s.stackTop();
    return 0;
}
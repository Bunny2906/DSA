#include<iostream>
using namespace std;
struct Stack 
{
    int size;
    int top;
    int *A;
};
void display(struct Stack s);
void stackTop(struct Stack s);
void push(struct Stack *s,int x)
{
    if(s->top<s->size-1)
    {
        s->top++;
        s->A[s->top]=x;
    }
    else
    {
        cout<<"stack overflow unable to insert "<<x<<" !!"<<endl;
    }
}
void pop(struct Stack *s)
{
    if(s->top==-1)
    {
        cout<<"stack underflow !!";
    }
    else
    {
        int x=s->A[s->top];
        s->top--;
        cout<<"deleted "<<x<<endl;
    }
    display(*s);
    stackTop(*s);
}
void display(struct Stack s)
{
    if(s.top!=-1)
    {
        cout<<"stack elements are :\n";
        while(s.top!=-1)
        {
            cout<<s.A[s.top]<<endl;
            s.top--;
        }
    }
}
void isEmpty(struct Stack s)
{
    if(s.top==-1)
    {
        cout<<"stack is empty";
    }
}
void isFull(struct Stack s)
{
    if(s.top==s.size-1)
    {
        cout<<"stack is full";
    }
}
void stackTop(struct Stack s)
{
    if(s.top!=-1)
    {
        cout<<"top element is :"<<s.A[s.top]<<endl;
    }
}
void peek(struct Stack s,int index)
{
    if(s.top!=-1)
    {
        if(index>=0 && index<=s.size-1)
        {
            cout<<"element at index "<<index<<" is :"<<s.A[index];
        }
    }
}
int main()
{
    int n,x;
    struct Stack s;
    cout<<"enter the size of the stack :";
    cin>>s.size;
    s.A=new int[s.size];
    s.top=-1;
    cout<<"enter no of elements to insert :";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" :";
        cin>>x;
        push(&s,x);
    }
    display(s);
    stackTop(s);
    pop(&s);
    peek(s,2);
    isFull(s);
    isEmpty(s);
    return 0;
}   
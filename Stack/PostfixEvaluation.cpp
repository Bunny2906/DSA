//Evaluating postfix expression using stack.
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;
void push(int x)
{
    struct Node* t;
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
int pop()
{
    struct Node *p;
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
    return x;
}
int isEmpty()
{
    if(top==NULL)
        return 0;
    else
        return 1;
}
int stackTop()
{
    if(top)
        return 1;
    else
        return 0;
}
int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='/' || x=='*')
        return 0;
    else
        return 1;
}
int precedence(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='/' || x=='*')
        return 2;
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
int eval(char *postfix)
{
    int i=0,x1,x2,r=0;
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isOperand(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {
            x2=pop();
            x1=pop();
            switch(postfix[i])
            {
                case '+':r=x1+x2;break;
                case '-':r=x1-x2;break;
                case '*':r=x1*x2;break;
                case '/':r=x1/x2;break;
            }
            push(r);
        }
    }
    return top->data;
}
int main()
{
    char *postfix="35*62/+4-";
    cout<<eval(postfix);
    return 0;
}
/*
Output:
14
*/
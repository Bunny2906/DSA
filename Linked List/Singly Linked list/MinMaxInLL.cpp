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
int minimum(struct Node *p)
{
    int i,min;
    min=32767;
    for(i=0;p!=0;i++)
    {
        if(p->data < min)
        {
            min=p->data;
        }
        else
        {
            p=p->next;
        }
    }
    cout<<"\nMinimum element is :"<<min;
}
int maximum(struct Node *p)
{
    int i,max;
    max=-32768;
    for(i=0;p!=0;i++)
    {
        if(p->data > max)
        {
            max=p->data;
        }
        else
        {
            p=p->next;
        }
    }
    cout<<"\nMaximum element is :"<<max;
}
int main()
{
    int n,i;
    cout<<"enter no of elements to be inserted :";
    cin>>n;
    int A[n];
    cout<<"enter "<<n<<" LL elements :\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create(A,n);
    display(first);
    minimum(first);
    maximum(first);
    return 0;
}
/*
Sample Output:
enter no of elements to be inserted :5
enter 5 LL elements :
1
2
3
4
5
1 2 3 4 5
Minimum element is :1
Maximum element is :5
*/
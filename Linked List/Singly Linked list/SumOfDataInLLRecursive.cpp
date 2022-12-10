//Recursive function to find sum of elements in linked list.

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
int count(struct Node *p)
{
    if(p==0)
    {
        return 0;
    }
    else
    {
        return count(p->next)+1;
    }
}
int sum(struct Node *p)
{
    if(p)
    {
        return p->data+sum(p->next);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i;
    cout<<"no of elements to be inserted? :";
    cin>>n;
    int A[n];
    cout<<"enter "<<n<<" LL elements :";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create(A,n);
    display(first);
    cout<<"\nSum is :"<<sum(first);
    return 0;
}
/*
Sample Output:

*/
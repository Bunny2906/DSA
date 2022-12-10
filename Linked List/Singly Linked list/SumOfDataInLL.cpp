// Finding sum of elements in linked list.

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
int sum(struct Node *p)
{
    int sum=0;
    if(p)
    {
        for(int i=0;p!=0;i++)
        {
            sum+=p->data;
            p=p->next;
        }
    }
    cout<<"\nSum is :"<<sum;
}
int main()
{
    int n,i;
    cout<<"no of elements to be inserted? :";
    cin>>n;
    int A[n];
    cout<<"enter LL elemnts:\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create(A,n);
    display(first);
    sum(first);
    return 0;
}
/*
Sample Output:
no of elements to be inserted? :5
enter LL elemnts:
1
2
3
4
5
1 2 3 4 5
Sum is :15
*/
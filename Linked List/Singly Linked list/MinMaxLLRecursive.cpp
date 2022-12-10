//Recursive function to find minimum and maximum elements in linked list.

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
int Rminimum(struct Node *p)
{
    int x=0;
    if(p==0)
    {
        return 32767;  //Max value in integer.
    }
    else
    {
        x=Rminimum(p->next);
        if(x < p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }
    }
}
int Rmaximum(struct Node *p)
{
    int x=0;
    if(p==0)
    {
        return -32768;   //Min value in integer.
    }
    else
    {
        x=Rmaximum(p->next);
        if(x>p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }
    }
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
    cout<<"\nminimum element is :"<<Rminimum(first);
    cout<<"\nmaximum element is :"<<Rmaximum(first);
    return 0;
}
/*
Sample Output:
enter no of elements to be inserted :5
enter 5 LL elements :
50
10
30
20
40
50 10 30 20 40
minimum element is :10
maximum element is :50
*/
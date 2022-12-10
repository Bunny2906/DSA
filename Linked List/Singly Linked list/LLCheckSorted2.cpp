//Checking whether elements in Linked List are sotred or not.
//Method-2

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
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
int checkSorted2(struct Node *p)
{
    p=new Node;
    p=first;
    int x=-32768;
    display(first);
    while(p!=0)
    {
        if(x > p->data)
        {
            return 0;
        }
        else
        {
            x=p->data;
            p=p->next;
        }
    }
    return 1;
}
int main()
{
    int A[]={1,2,3,87,4,5,6,7,8};
    create(A,8);
    if(checkSorted2(first))
    {
        cout<<"\nsorted";
    }
    else
    {
        cout<<"\nunsorted ";
    }
    return 0;
}
/*
Output:
unsorted
*/

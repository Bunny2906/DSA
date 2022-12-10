// Creating a linked list.

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* link;
}*start=NULL;
void createLL(int A[],int n)
{
    struct Node *t;
    struct Node *end;
    start=new Node;
    start->data=A[0];
    start->link=NULL;
    end=start;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->link=NULL;
        end->link=t;
        end=t;
    }
}
void display(struct Node *P)
{
    if(P!=NULL)
    {
        cout<<P->data<<" ";
        display(P->link);
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    createLL(A,5);
    display(start);
    return 0;
}
/*
Output:
1 2 3 4 5
*/


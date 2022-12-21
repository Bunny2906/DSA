// Bin/Bucket Sort using Linked List.
/*-->We need an auxilary(extra) array of size one more than maximum element in the list.
     Bin/Bucket sort uses very large space.
  -->Each position or each index in auxilary array is considered as bin/bucket.
  -->Initially, all the elements of auxilary array are NULL.Auxilary array is a array of Linked Lists.
  -->Copy the elements of our list into auxilary array as,
     If element to be inserted is 'x', then copy its node into auxilary array at index 'x'.
  -->Scan through auxilary array and if any index is not null, then delete linked list in FIFO manner 
     and insert deleted element into original list back again.
*/
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Bin
{
    Node **bins;
}b;
int findMax(int A[],int n)
{
    int i,max;          //function to find maximum number.
    max=A[0];
    for(i=0;i<n;i++)
    {
        if(max < A[i])
        {
            max=A[i];
        }
    }
    return max;
}
void Insert(struct Bin b,int x)
{
    Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    Node *p=b.bins[x];
    if(p==NULL)
    {
        b.bins[x]=t;
    }
    else
    {
        t->next=p->next;
        p->next=t;
    }
}
int Delete(struct Bin b,int i)
{
    Node *temp,*p=b.bins[i];
    int x;
    if(b.bins[i])
    {
        temp=b.bins[i];
        b.bins[i]=b.bins[i]->next;
        x=temp->data;
        delete temp;  
    }
    return x;
}
void bucketSort(int A[],int n)
{
    int i,j,max;
    max=findMax(A,n);
    b.bins=new Node*[max+1];
    for(i=0;i<max+1;i++)
    {
        b.bins[i]=NULL;
    }
    for(i=0;i<n;i++)
    {
        Insert(b,A[i]);
    }
    i=0,j=0;
    while(i<max+1)
    {
        while(b.bins[i]!=NULL)
        {
            A[j++]=Delete(b,i);
        }
        i++;
    }
}
int main()
{
    int A[]={8,6,3,9,12,15,8,10};
    bucketSort(A,8);
    for(int i=0;i<8;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
/*
Output:
3 6 8 8 9 10 12 15
*/

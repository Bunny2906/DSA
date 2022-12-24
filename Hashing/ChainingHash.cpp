//Chaining---Open Hashing Technique.
/*-->In this approach,Hash Table is an 'Array of Linked Lists'.
  -->All key value pairs mapping to the same index will be stored 
     in the linked list of that index.
*/
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Array
{
    Node **ht;
}arr;
int Hash(int x)
{
    return x%10;
}
void InsertHash(struct Array arr,int x)
{
    Node *t,*p=arr.ht[Hash(x)],*q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(p==NULL)
    {
        arr.ht[Hash(x)]=t;
    }
    else
    {
        while(p && p->data <= x)
        {
            q=p;
            p=p->next;
        }
        if(q==NULL)
        {
            t->next=arr.ht[Hash(x)];
            arr.ht[Hash(x)]=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}
void DeleteHash(struct Array arr,int x)
{
    Node *p=arr.ht[Hash(x)],*q=NULL,*temp;
    if(p!=NULL)
    {
        while(p->data!=x && p)
        {
            q=p;
            p=p->next;
        }
       if (p && p->data == x)
        {
            if (q == NULL)
            {
                arr.ht[Hash(x)] = arr.ht[Hash(x)]->next;    //or  arr.ht[Hash(x)]->next;
                temp = p;
                p = p->next;
                delete temp;
            }
            else
            {
                q->next = p->next;
                temp = p;
                p = p->next;
                delete temp;
            }
        }
    }
}
void Display(struct Array arr)
{
    for(int i=0;i<10;i++)
    {
        while(arr.ht[i]!=NULL)
        {
            cout<<arr.ht[i]->data<<" ";
            arr.ht[i]=arr.ht[i]->next;
        }cout<<endl;
    }
}
int main()
{
    arr.ht=new Node*[10];    //Array of linked lists.
    for(int i=0;i<10;i++)
    {
        arr.ht[i]=NULL;
    }
    InsertHash(arr,12);
    InsertHash(arr,122);
    InsertHash(arr,12);
    InsertHash(arr,10);
    InsertHash(arr,11);
    InsertHash(arr,13);
    InsertHash(arr,14);
    InsertHash(arr,15);
    DeleteHash(arr,12);
    DeleteHash(arr,122);
    DeleteHash(arr,13);
    Display(arr);
    return 0;
}
/*
Output:
10
11
12 12 122
13
14
15

After deleting 12,122,13......
10
11
12

14
15
*/
//Radix Sort.
/*-->Unlike Bin/Bucket Sort, We need an auxilary array of size 10 
     i.e;decimal representation of number rangs from 0-9.
  -->In first pass, get remainder of each number after dividing it with 10.
     And then insert that element's Node at at 'remainder'th index in auxilary array.-->(A[i]%10)th index.
  -->Now Delete the elements from auxilary array and copy back those elements into original array in deleted sequence.
  -->In second pass, divide each element with 10 and divide the result again with 10 
     and get remainder.Now insert element's Node into auxilary array at 'remainder'th index.-->((A[i]/10)%10)th index.
  -->Now delete the elements in auxilary array and copy back to original array.
  -->In third pass, do the same with --> ((A[i]/100)%10)
  -->If the numbers in our list are 'n' digit numbers then we need 'n' no.of passes.
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
void Insert(int index,int x)
{
    Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    Node *p=b.bins[index];
    if(p==NULL)
    {
        b.bins[index]=t;
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
    int i,j;
    b.bins=new Node*[10];
    for(i=0;i<10;i++)
    {
        b.bins[i]=NULL;
    }
    //Pass-1
    for(int i=0;i<n;i++)
    {
        Insert(A[i]%10,A[i]);
    }
    i=0,j=0;
    while(i<10)
    {
        while(b.bins[i]!=NULL)
        {
            A[j++]=Delete(b,i);
        }
        i++;
    }
    //Pass-2
    for(int i=0;i<n;i++)
    {
        Insert((A[i]/10)%10,A[i]);
    }
    i=0,j=0;
    while(i<10)
    {
        while(b.bins[i]!=NULL)
        {
            A[j++]=Delete(b,i);
        }
        i++;
    }
    //Pass-3
    for(int i=0;i<n;i++)
    {
        Insert((A[i]/100)%10,A[i]);
    }
    i=0,j=0;
    while(i<10)
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
    int A[]={301,700,450,654,496,166,990,522};
    bucketSort(A,8);
    for(int i=0;i<8;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
/*
Output:
166 301 450 496 522 654 700 990
*/
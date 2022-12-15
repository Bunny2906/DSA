//Merge sort using Array.
/*-->In merge sort, each element of list is considered as a seperate list.
  -->Given list is divided into two parts i.e; mid=(low+high)/2 .
  -->Left sublist ranges from low to mid and Right sublist ranges from mid+1 to high.
  -->Similarly, the divided lists are again divided into two parts until we get single element.
  -->Those single elements are sorted '2 at a time' .
  -->Finally, sorted sublists are merged to get our final sorted list.
*/
#include<iostream>
using namespace std;
void merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[50];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        {
            B[k++]=A[i++];
        }
        else
        {
            B[k++]=A[j++];
        }
    }
    for(;i<=mid;i++)
    {
        B[k++]=A[i];
    }
    for(;j<=h;j++)
    {
        B[k++]=A[j];
    }
    for(i=l;i<=h;i++)
    {
        A[i]=B[i];
    }
}
void mergeSort(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int main()
{
    int A[]={34,12,2,67,23};
    mergeSort(A,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
/*
Output:
2 12 23 34 67 
*/
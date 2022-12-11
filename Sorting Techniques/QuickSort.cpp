//Quick sort using Array.
/*In quick sort, the partition of the list is performed based on the element called pivot. 
Here pivot element is one of the elements in the list.
The list is divided into two partitions such that "all elements to the left of pivot are 
smaller than the pivot and all elements to the right of pivot are greater than or equal 
to the pivot".
-->Consider the first element of the list as pivot.
-->Define two variables i and j. Set i and j to first and last 
   elements of the list respectively.
-->Increment i until list[i] > pivot then stop.
-->Decrement j until list[j] < pivot then stop.
-->If i < j then exchange list[i] and list[j].
-->Repeat steps 3,4 & 5 until i > j.
-->Exchange the pivot element with list[j] element.
*/
#include<iostream>
using namespace std;
int partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;
    do
    {
        while(A[i] <= pivot)
        {
            i++;
        }
        while(A[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }while(i<j);
    swap(A[l],A[j]);
    return j;
}
void quickSort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(A,l,h);
        quickSort(A,l,j);
        quickSort(A,j+1,h);
    }
}
int main()
{
    int A[]={11,7,5,3,2};
    quickSort(A,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
/*
Output:
2 3 5 7 11
*/
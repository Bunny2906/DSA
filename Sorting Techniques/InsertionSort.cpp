//Insertion Sort using Array.
/* -->Assume that first element in the list is sorted portion and all the remaining elements are in unsorted portion.
   -->Take the first element from the unsorted portion and insert it into sorted portion at correct position.
   -->Repeat the same until all the elements from unsorted portion are moved into sorted portion. */
/*Insertion sort is both "Adaptive & Stable" because it takes minimum time when list is already sorted...and
  it is stable because it sorts the list even if duplicates are available.*/

#include<iostream>
using namespace std;
struct Array
{
    int size;
    int *A;
};
void insertionSort(struct Array arr)
{
    int i,j,x;
    for(i=1;i<arr.size;i++)
    {
        j=i-1;
        x=arr.A[i];
        while(j>=0 && arr.A[j]>x)
        {
            arr.A[j+1]=arr.A[j];
            j--;
        }
        arr.A[j+1]=x;
    }
}
int main()
{
    struct Array arr;
    cout<<"Enter the size of array :";
    cin>>arr.size;
    arr.A=new int[arr.size];
    cout<<"Enter array elements :\n";
    for(int i=0;i<arr.size;i++)
    {
        cin>>arr.A[i];
    }
    insertionSort(arr);
    cout<<"Sorted Array is:";
    for(int i=0;i<arr.size;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    return 0;
}
/*
Sample Output:
Enter the size of array :5
Enter array elements :
30
12
56
9
101
Sorted Array is:9 12 30 56 101
*/


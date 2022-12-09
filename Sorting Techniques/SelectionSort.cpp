#include<iostream>
using namespace std;
struct Array
{
    int size;
    int *A;
};
void insertionSort(struct Array arr)
{
    int i,j;
    for(i=0;i<arr.size;i++)
    {
       for(j=i+1;j<arr.size;j++)
       {
            if(arr.A[i] > arr.A[j])
            {
                swap(arr.A[i],arr.A[j]);
            }
       }
    }
}
int main()
{
    struct Array arr;
    cout<<"Enter the size of list :";
    cin>>arr.size;
    arr.A=new int[arr.size];
    cout<<"Enter list elements :\n";
    for(int i=0;i<arr.size;i++)
    {
        cin>>arr.A[i];
    }
    insertionSort(arr);
    cout<<"Sorted List is:";
    for(int i=0;i<arr.size;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    return 0;
}
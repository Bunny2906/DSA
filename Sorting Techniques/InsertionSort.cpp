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
    for(int i=0;i<arr.size;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    return 0;
}
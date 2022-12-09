#include<iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
};
int isSorted(struct Array arr)
{
    for(int i=0;i<arr.size-1;i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
           return 0;
        }
    }
    return 1;
}
int main()
{ 
    struct Array arr={{1,2,3,4,5,6,7},7};
    cout<<isSorted(arr)<<endl;
    if(isSorted(arr))
    {
        cout<<"Array is sorted ";
    }
    else
    {
        cout<<"Array is not sorted ";
    }
    return 0;
    return 0;
}
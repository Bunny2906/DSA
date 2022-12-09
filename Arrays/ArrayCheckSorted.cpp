//Checking if array is sorted or not.

#include<iostream>
using namespace std;
int isSorted(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(A[i] > A[i+1])
        {
           return 0;
        }
    }
    return 1;
}
int main()
{ 
    A[]={1,2,3,4,5,6,7};
    if(isSorted(A,7))
    {
        cout<<"Array is sorted ";
    }
    else
    {
        cout<<"Array is not sorted ";
    }
    return 0;
}
/*
Output:Array is sorted
*/


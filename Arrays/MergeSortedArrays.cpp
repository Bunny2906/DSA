//Merging two sorted arrays.(Output is sorted array of combination of elements of both arrays.)
#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0,k=0;
    int A[5]={1,3,5,7,8};
    int B[7]={0,2,4,6,8,10,16};
    int C[12];
    while(i<5 && j<7)
    {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }
    for(;i<5;i++)
    {
        C[k++]=A[i];
    }
    for(;j<7;j++)
    {
        C[k++]=B[j];
    }
    for(i=0;i<12;i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}
/*
Output:
0 1 2 3 4 5 6 7 8 8 10 16
*/
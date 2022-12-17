/*-->find maximum element in the given list.
  -->define a auxilary array of size 1 more than maximum element and initialize it with 0's.
  -->count each element in the list repeated how many times and place count at appropriate index.(Hashing)
  -->After that in auxilary array,if any element is found greater than '0',
     then copy that element's index to our original list.
*/
#include<iostream>
using namespace std;
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
void countSort(int A[],int n)
{
    int i,j,max;
    int *B;     //Extra Array
    max=findMax(A,n);
    B=new int[max+1];
    for(i=0;i<max+1;i++)
    {
        B[i]=0;
    }
    for(i=0;i<n;i++)
    {
        B[A[i]]++;
    }
    i=0,j=0;
    while(i<max+1 && j<=n)
    {
        if(B[i] > 0)
        {
            A[j++]=i;
            B[i]--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int A[]={8,6,3,9,12,15,8,10};
    countSort(A,8);
    for(int i=0;i<7;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
/*
Output:
3 6 8 8 9 10 12
*/
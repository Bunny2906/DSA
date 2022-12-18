//Shell Sort Using Array.
/*-->Shell Sort is used to sort huge lists and it is extension of insertion sort.
  -->Here we require a variable 'gap' and it is initially calculated as gap=(sizeof list)/2.
  -->In first pass, for i=0, if element at 'i'th index is greater than element at 'i+5'th index,
     then swap them.
  -->In second pass, gap becomes half of initial one.(gap=gap/2) and same operation is performed 
     as in first pass.
  -->At each pass, gap becomes half of the previous one and last pass is that when gap=1.
     i.e; gap>=1.
*/
#include<iostream>
using namespace std;
void shellSort(int A[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=A[i];
            j=i-gap;
            while(j>=0 && A[j]>temp)
            {
                A[j+gap]=A[j];
                j=j-gap;
            }
            A[j+gap]=temp;
        }
    }
}
int main()
{
    int A[]={23,12,45,2,9};
    shellSort(A,5);
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
/*
Output:
2 9 12 23 45
*/
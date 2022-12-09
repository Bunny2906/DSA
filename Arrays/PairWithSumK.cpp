//Finding a pair that gives us required sum from Array.

#include<iostream>
using namespace std;
int pairWithSumK(int A[],int n)
{   
    int i,j,sum;
    cout<<"Enter required sum :";
    cin>>sum;
    for(i=0;i<n-1;i++)                 
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==sum)
            {
                cout<<A[i]<<" and "<<A[j]<<" is a pair with sum "<<sum<<endl;
            }
        }
    }
}
int main()
{
    int A[]={6,3,8,10,16,7,5,2,9,14};
    int size;
    size=sizeof(A)/sizeof(int);
    pairWithSumK(A,size);
    return 0;
}
/*
Sample Output:
Enter required sum :10
3 and 7 is a pair with sum 10
8 and 2 is a pair with sum 10
*/


//Finding sum of first 'n' elements in Array.

#include<iostream>
using namespace std;
int sumrecursive(int A[],int n)
{  
    if(n<0)
    {
        return 0;
    }
    else
    {
        return sumrecursive(A,n-1)+A[n];
    }
}
int main()
{ 
    int n;
    int A[]={12,34,56,10,23,78,2};
    cout<<"enter no of elements to be added :";
    cin>>n;
    cout<<"sum of first "<<n<<" elements is :"<<sumrecursive(A,n-1);
    return 0;
}
/*
Sample output:
enter no of elements to be added :5
sum of first 5 elements is :135
*/


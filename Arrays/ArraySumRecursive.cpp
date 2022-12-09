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
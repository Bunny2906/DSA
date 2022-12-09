#include<iostream>
using namespace std;
struct Array
{
    int n;
    int *A;
};
void bubbleSort(struct Array arr)
{
    int flag;
    for(int i=0;i<arr.n-1;i++)
    {
        flag=0;
        for(int j=0;j<arr.n-i-1;j++)
        {
            if(arr.A[j] > arr.A[j+1])
            {
                swap(arr.A[j],arr.A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    struct Array arr;
    cout<<"enter the size of array :";
    cin>>arr.n; 
    arr.A=new int[arr.n];
    cout<<"enter array elements :\n";
    for(int i=0;i<arr.n;i++)
    {
        cin>>arr.A[i];
    }
    bubbleSort(arr);
    cout<<"Sorted Array is:";
    for(int i=0;i<arr.n;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    return 0;
}
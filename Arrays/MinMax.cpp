//Finding minimum and maximum elements of Array in 'Single Scan'

#include<iostream>
using namespace std;
struct Array
{
int size;
int *A;
};
int minMax(struct Array arr)
{
int i,j,min,max;
min=max=arr.A[0];
for(i=1;i<arr.size;i++)
{
    if(arr.A[i]<min)
    {
        min=arr.A[i];
    }
    else if(arr.A[i]>max)
    {
        max=arr.A[i];
    }
}
cout<<"maximum element is :"<<max<<endl;
cout<<"minimum element is :"<<min<<endl;
return 0;
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
    minMax(arr);
    return 0;
}
/*
Sample output:
Enter the size of array :5
Enter array elements :
32
12
6
78
43
maximum element is :78
minimum element is :6
*/

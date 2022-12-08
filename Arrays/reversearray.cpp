//Creating a dynamic array and reversing it using Single 'for loop'

/* Here we are defining a structure with two members 'size' and '*A'
'*A' is for creating a dynamic array,which can be modified easily.
In 'reverse' function we're using a single 'for' loop to reverse the array tht reduces time complexity.*/

#include<iostream>
using namespace std;
struct Array
{
    int size;
    int *A;
};
void reverse(struct Array arr)
{
    int i,j;
    for(i=0,j=arr.size-1; i<j ; i++,j--)
    {
        swap(arr.A[i],arr.A[j]);
    }
}
void Display(struct Array arr)
{
    int i;
    cout<<"Reversed Array is :";
    for(i=0;i<arr.size;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{ 
    struct Array arr;
    cout<<"Enter the size of array :";  //Taking input from user
    cin>>arr.size;
    arr.A=new int[arr.size];           //creating dynamic array
    cout<<"Enter array elements :\n";
    for(int i=0;i<arr.size;i++)
    {
        cin>>arr.A[i];
    }
    reverse(arr);
    Display(arr);
    return 0;
}
/*
Sample output :
Enter the size of array :5
Enter array elements :
1
2
3
4
5
Reversed Array is :5 4 3 2 1
*/


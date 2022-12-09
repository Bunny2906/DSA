//Selection Sort using Array
/*-->A list with n elements requires (n-1) passes.
  -->In first pass, select the first element in the list and compare it with all other elements.
     While comparison,if any element is found smaller than the selected element,then swap selected element and that smaller element.
  -->After first pass, The smallest element in the list will be at first position.
  -->In second pass, select the second element in the list and compare it with all other elements
     Similarly after second pass, the second smallest element in the list will be at second position.
  -->Repeat the same procedure for entire list. 
*/
#include<iostream>
using namespace std;
struct Array
{
    int size;
    int *A;
};
void insertionSort(struct Array arr)
{
    int i,j;
    for(i=0;i<arr.size;i++)
    {
       for(j=i+1;j<arr.size;j++)
       {
            if(arr.A[i] > arr.A[j])
            {
                swap(arr.A[i],arr.A[j]);
            }
       }
    }
}
int main()
{
    struct Array arr;
    cout<<"Enter the size of list :";
    cin>>arr.size;
    arr.A=new int[arr.size];
    cout<<"Enter list elements :\n";
    for(int i=0;i<arr.size;i++)
    {
        cin>>arr.A[i];
    }
    insertionSort(arr);
    cout<<"Sorted List is:";
    for(int i=0;i<arr.size;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    return 0;
}
/*
Sample Output:
Enter the size of list :5
Enter list elements :
34
12
10
26
24
Sorted List is:10 12 24 26 34
*/


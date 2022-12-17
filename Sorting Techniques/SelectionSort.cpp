//Selection Sort Using Dynamic Array.
/*-->Select the first element of the list.
  -->Compare the selected element with all other elements in the list one by one.
  -->In every comparison, if any element found to be smaller than selected element, then swap them.
  -->After first iteration, the first element at first position is sorted.(i.e; Small element in the list is at first position).
  -->Now do the same for second element and for the entire list.
  -->A list with 'n' elements requires (n-1)iterations(passes).
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
23
12
45
2
26
Sorted List is:2 12 23 26 45 
*/

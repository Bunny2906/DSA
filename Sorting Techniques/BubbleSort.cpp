//Bubble Sort using Array
/*-->Each element of array is compared with its adjacent element.
  -->The algorith processes the list in passes. A list with n elements requires (n-1) passes for sorting.
  -->In first pass,first element is compared with second element and if first element is  greater than second element,then they are swapped.
     Similarly,comparison is done for next two elements and then for entire list.
  -->After first pass,The largest element in the list is at last position in the list.Since we already got our largest
     element at last position,we no need to compare it again.
     In second pass we follow the same process and comparison is done only for (n-2) elements.After second pass,
     second largest element is at second position from the last in the list.
   -->Same process is followed until (n-1) passes and then list gets sorted.  
*/
/*-->Bubble sort is adaptive because it takes minimum time when list is already sorted or partially sorted. We made it adaptive by introducing 'flag' bit.
  -->Bubble sort is stable because it will sort the list even if it contains duplicates.*/

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
    cout<<"enter the size of list :";
    cin>>arr.n; 
    arr.A=new int[arr.n];
    cout<<"enter list elements :\n";
    for(int i=0;i<arr.n;i++)
    {
        cin>>arr.A[i];
    }
    bubbleSort(arr);
    cout<<"Sorted List is:";
    for(int i=0;i<arr.n;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    return 0;
}
/*
Sample Output:
enter the size of list :5
enter list elements :
30
40
10
50
20
Sorted List is:10 20 30 40 50
*/


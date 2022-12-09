//Checking if an Array contains duplicates and no.of times it is repeated.

#include<iostream>
using namespace std;
struct Array 
{
    int size;
    int *A;
};
void countDuplicate(struct Array arr)
{   
    int i,j,count;
    for(i=0;i<arr.size-1;i++)                 
    {
        count=1;
        if(arr.A[i]!=-1)
        {
            for(j=i+1;j<arr.size;j++)
            {
                if(arr.A[i]==arr.A[j])
                {
                    count++;
                    arr.A[j]=-1;
                }
            }
            if(count>1)
            {
                cout<<arr.A[i]<<" is repeated "<<count<<" times "<<endl;
            }
        }
    }
}
int main()
{
    struct Array arr;
    cout<<"Enter the size of Array :";
    cin>>arr.size;
    cout<<"Enter Array elements :\n";
    for(int i=0;i<arr.size;i++)
    {
        cin>>arr.A[i];
    }
    countDuplicate(arr);
    return 0;
}
/*
Sample Output:
Enter the size of Array :10
Enter Array elements :
1
1
2
2
3
3
4
4
5
5
1 is repeated 2 times
2 is repeated 2 times
3 is repeated 2 times
4 is repeated 2 times
5 is repeated 2 times
*/


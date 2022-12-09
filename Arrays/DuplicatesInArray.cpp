#include<iostream>
using namespace std;
struct Array 
{
    int A[20];
    int size;
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
    struct Array arr={{3,8,6,8,10,15,15,15,12,20},11};
    countDuplicate(arr);
}
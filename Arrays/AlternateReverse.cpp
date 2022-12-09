//Reversing Alternate Elements of Array

#include<iostream>
using namespace std;
int main()
{
    int A[]={10,20,30,40,50,60};
    int i=0;
    while(i<6)
    {
        swap(A[i],A[i+1]);
        i+=2;
    }
    for(int i=0;i<6;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
/*
Output :20 10 40 30 60 50
*/


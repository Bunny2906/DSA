//Quadratic probing---Closed Hashing Technique.
/*-->If positon given by haash function is not null,then next position 
     is found by quadratic value instead of linear value.
*/
#include<iostream>
using namespace std;
int Hash(int x)
{
    return x%10;
}
int probe(int H[],int key)
{
    int index=Hash(key);
    int i=0;
    while(H[(index+i*i)%10]!=0)
    {
        i++;
    }
    return (index+i*i)%10;
}
void Insert(int H[],int key)
{
    int index=Hash(key);
    if(H[index]!=0)
    {
        index=probe(H,key);
    }
    H[index]=key;
}
int Search(int H[],int key)
{
    int index=Hash(key);
    int i=0;
    while(H[(index+i*i)%10]!=key)
    {
        i++;
    }
    return (index+i*i)%10;
}
int main()
{
    int HT[10]={0};
    Insert(HT,12);
    Insert(HT,22);
    Insert(HT,15);
    Insert(HT,25);
    Insert(HT,6);
    Insert(HT,2);
    for(int i=0;i<10;i++)
    {
        cout<<HT[i]<<endl;
    }
    cout<<"\nKey is found at index :"<<Search(HT,25);
    return 0;
}
/*
Output:
0
2
12
22
0
15
25
6
0
0

Key is found at index :6
*/
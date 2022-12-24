//Double Hashing---Closed Hashing Technique.
/*-->Double hashing uses the idea of using a second hash function to the key when collision occurs.
  -->Here,prime is prime number less than size of Hash Table.
*/
#include<iostream>
using namespace std;
#define prime 7      //Only for hash table of size 10.
int Hash1(int x)
{
    return x%10;
}
int Hash2(int x)
{
    return prime-(x%prime);
}
int probe(int H[],int key)
{
    int i=0;
    int index=(Hash1(key)+i*Hash2(key))%10;
    while(H[index]!=0)
    {
        index=(Hash1(key)+i*Hash2(key))%10;
        i++;
    }
    return index;
}
void Insert(int H[],int key)
{
    int index=Hash1(key);
    if(H[index]!=0)
    {
        index=probe(H,key);
    }
    H[index]=key;
}
int Search(int H[],int key)
{
    int i=0;
    int index=(Hash1(key)+i*Hash2(key))%10;
    while(H[index]!=key)
    {
        index=(Hash1(key)+i*Hash2(key))%10;
        i++;
    }
    return index;
}
int main()
{
    int HT[10]={0};
    Insert(HT,5);
    Insert(HT,25);
    Insert(HT,15);
    Insert(HT,35);
    Insert(HT,95);
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
15
35
0
95
5
0
0
25
0

Key is found at index :8
*/
/* Indirect Recursion: It is a type of recursion in which functions
   are called in a circular manner.
   Ex: function 'A' calls function 'B' and 'B' again calls 'A' and so on.....
*/
#include<iostream>
using namespace std;
void funB(int n);      //pre declaration.
void funA(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        cout<<n<<endl;
        funA(n/2);
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    funA(n);
}
/*
Sample Output:
enter the value of n:20
20
19
9
8
4
3
1
*/
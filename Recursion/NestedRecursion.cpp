/* Nested Recursion :It is a type of recursion in which parameter
   itself is a recursive call in function call.i.e; 'Recursion inside Recursion'.
*/

#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<fun(n);
    return 0;
}
/*
Sample Output:
enter the value of n:50
91
*/
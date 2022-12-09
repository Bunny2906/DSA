/* Tail Recursion: If a functionn is calling itself and that call is
   last statement in that function,then this type of recursion is called
   'Tail Recursion'
*/

#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    fun(n);
    return 0;
}
/*
Sample Output:
enter the value of n:3
3
2
1
*/
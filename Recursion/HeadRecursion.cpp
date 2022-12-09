/* Head Recursion: If a functionn is calling itself and that call is
   first statement in that function,then this type of recursion is called
   'Head Recursion'
*/

#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;
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
1
2
3
*/
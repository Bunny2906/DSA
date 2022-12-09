/* Tree Recursion: If a Recursive function is calling itself 
   more than one time,then it is called 'Tree Recursion'.
*/

#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);    //Here two recursive calls are present one by one.
        fun(n-1);    //Hence,it is tree recursion.
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
1
2
1
1
*/
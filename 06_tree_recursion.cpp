#include<iostream>
#include<stdlib.h>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    fun(x);

    return 0;
}
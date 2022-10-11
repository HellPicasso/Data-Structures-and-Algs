#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>100)
        return (n-10);
    else 
        return fun(fun(n+11));
}
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<fun(x)<<endl;
    
    return 0;
}
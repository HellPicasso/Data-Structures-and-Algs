#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    else 
        return n+sum(n-1);
}
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"The sum of "<<x<<" natural numbers is "<<sum(x)<<endl;
    
    return 0;
}
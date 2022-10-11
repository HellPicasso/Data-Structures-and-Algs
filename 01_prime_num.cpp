#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x,y,flag=0;
    cout<<"Enter a number";
    cin>>x;
    y=x/2;
    for(int i=2;i<=y;i++)
    {
        if(x%i==0)
        {
            cout<<"The number is not a prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"It is a prime number"<<endl;
    return 0;
}
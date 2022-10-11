#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *ptr;
    int n,i,sum=0;

    cout<<"Enter the length of the array\n";
    cin>>n;

    int *a=new int[n];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum=sum+=a[i];
    }
    cout<<"The sum of elements of array is "<<sum;
    delete(a);

    return 0;
}
#include<iostream>
using namespace std;

int power1(int m,int n)
{
    if(n==0)
        return 1;
    else    
        return m*power1(m,n-1);
}
int power2(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power2(m*m,n/2);
    else
        return m*power2(m*m,n/2);
}
int main()
{
    int m,n;
    cout<<"Enter a number"<<endl;
    cin>>m;
    cout<<"Enter the power"<<endl;
    cin>>n;
    cout<<"The value of "<<m<<"^"<<n<<" using method 1 is "<<power2(m,n)<<endl;
    cout<<"The value of "<<m<<"^"<<n<<" using method 2 is "<<power2(m,n)<<endl;
    
    
    return 0;
}
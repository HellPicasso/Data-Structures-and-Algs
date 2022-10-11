#include<iostream>
using namespace std;

double taylor_calculator(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else 
    {
        r=taylor_calculator(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main()
{
    int x,n;
    cout<<"Enter the power of e"<<endl;
    cin>>x;
    cout<<"Enter the number  of terms"<<endl;
    cin>>n;
    cout<<"The value of e^"<<x<<" for "<<n<<" number of terms is "<<taylor_calculator(x,n)<<endl;
    
    return 0;
}
#include<iostream>
#include<math.h>

using namespace std;

float fun(float x)
{
    return (1/(1+x*x));
}

int main()
{
    int n;
    float a,b,h,temp;
    float sum1, sum2, result;
    cout<<"Enter the value of the interval lower and higher :";
    cin>>a>>b;
    cout<<"\nEnter the number of the stripes :";
    cin>>n;

    h=((b-a)/n);
    if (n % 2 == 1)
    {
        cout<<"Error !! "<<endl<<"As the odd stripes gives the false result";
        exit(0);
    }
    sum1=fun(a)+fun(b);
    for(int i=1;i<n-1;i++)
    {
        if(i % 2 == 0 )
        sum2=sum2+2*fun(a+i*h);
        else
        sum2=sum2+4*fun(a+i*h);
    }

    result=((h/3)*(sum1+sum2));
    cout<<"The value of integration is :"<<result<<endl;
}
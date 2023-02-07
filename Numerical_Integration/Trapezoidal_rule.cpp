#include<iostream>
#include<math.h>

using namespace std;

float fun(float x)
{
    return (1/(1+x*x));
}

int main()
{
   float a,b,n,h;
    float sum1, sum2, result;
    cout<<"Enter the value of the interval lower and higher :";
    cin>>a>>b;
    cout<<"\nEnter the number of the stripes :";
    cin>>n;

    h=((b-a)/n);
    sum1=fun(a)+fun(b);
    for(int i=1;i<n-1;i++)
    {
        sum2=sum2+fun(a+i*h);
    }

    result=((h/2)*(sum1+2*sum2));
    cout<<"The value of integration is :"<<result<<endl;
}
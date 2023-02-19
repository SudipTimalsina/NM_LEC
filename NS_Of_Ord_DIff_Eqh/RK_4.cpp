// Numerical Solution Of Ordinary Differential Equation 

#include<iostream>
#include<math.h>

using namespace std;

float f(float x, float y)
    {
        return (x*x-y);
    }

int main()
    {
        float x0, y0, xn ,n ,k ,k1 ,k2 ,k3 ,k4 ,h ;
        cout<<"Enter the Initial value of x :";
        cin>>x0;
        cout<<"Enter the Initial value of y :";
        cin>>y0;
        cout<<"Enter the value of the final x :";
        cin>>xn;
        cout<<"Enter the value of the intervals n :";
        cin>>n;
            h =((xn-x0)/n);
        float x=x0;
        float y=y0;
        cout<<endl<<"iteration \t x \t y"<<endl;
        cout<<0<<"\t\t"<<x<<"\t"<<y<<endl;
        for (int i=1;i<=n;i++)
            {
                k1=(h*f(x,y));
                k2=(h*f(x+h/2,y+k1/2));
                k3=(h*f(x+h/2,y+k2/2));
                k4=(h*f(x+h,y+k3));
                k=((k1+2*k2+2*k3+k4)/6);
                x=x+h;
                y=y+k;
                cout<<i<<"\t\t"<<x<<"\t"<<y<<endl;
            }
    return 0;
    }
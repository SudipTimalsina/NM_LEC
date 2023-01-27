#include<iostream>
#include<cmath>
using namespace std;

float calc(float x)
{
    return (x*3-cos(x)-1);
}
float dcalc(float x)
{
    return (3+sin(x));
}

int main()
    {
        float a, b, c, e;
        cout<<"Enter the interval (a,b) between whicn the ans is required"<<endl;
        cin>>a>>b;
        cout<<"Enter the toloratable error " <<endl;
        cin>>e;
        int count=0;
        float x0=((a+b)/2);

        do {
            count++;
            if(abs(dcalc(x0))<0.000005)
            {
                cout<<"Math Error"<<endl;
                return 1; 
            }
            if (count>50)
                {cout<<"Time Out Error";
                 return 2;
                }
            else 
            {
                c=x0-(calc(x0)/dcalc(x0));
                x0=c;
            }
        }while(abs(calc(c)>e));
        cout<<"ans="<<c<<endl;
        return 0;
    }


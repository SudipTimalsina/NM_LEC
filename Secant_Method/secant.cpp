#include<iostream>
#include<cmath>
using namespace std;

float calc(float x)
{
    return (sin(x)+5);
}

int main()
    {
        float a, b, c, e;
        cout<<"Enter the interval (a,b) between whicn the ans is needed"<<endl;
        cin>>a>>b;
        cout<<"Enter the toloratable error "<<endl;
        cin>>e;
        int count=0;

        do {
            count++;
            if(abs(calc(b)-calc(a))<e)
            {
                cout<<"...Math Error..." <<endl;
                return 1; 
            }
            if (count>20)
                {cout<<"Time out ";
                 return 2;
                }
            else 
            {
                c=((a*calc(b)-b*calc(a))/(calc(b)-calc(a)));
                a=b;
                b=c;
            }
        }while(abs(calc(c)>e));
        cout<<"Ans="<<c<<endl;
        return 0;
    }

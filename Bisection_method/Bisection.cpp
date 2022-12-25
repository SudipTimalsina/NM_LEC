#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

float fun(float x){
    return (3*x*x*x+2*x+2);
}

int main(){
    float a,b,e,mid;
    cout<<"Enter the starting interval: "<<endl;
    cin>>a;
    cout<<"Enter the final interval: "<<endl;
    cin>>b;
    cout<<"What is the tolerable error? : "<<endl;
    cin>>e;
    cout<<endl;
    int n = ceil((log10(b-a)-log10(e))/log10(2));
    cout<<"The minimum number of iterations required are : "<<n<<endl<<endl;
    int count=0;
    // cout<<setw(5)<<"i"<<setw(10)<<"a"<<setw(10)<<"b"<<setw(10)<<"mid"<<setw(10)<<"fmid"<<setw(10)<<endl;
    // cout<<"----------------------------------------------------"<<endl<<endl;
    do{
        mid = (a+b)/2;
        if (fun(a)*fun(mid) > 0)
        {
            a = mid;
        }
        else{
            b = mid;
        }
        count++;
        // cout<<setw(5)<<count<<setw(10)<<a<<setw(10)<<b<<setw(10)<<mid<<setw(15)<<fun(mid)<<setw(10)<<endl;
        
    }while((abs(fun(mid))>e && count<=(2*n)));
    cout<<"The root is "<<mid;
    return 0;
} 
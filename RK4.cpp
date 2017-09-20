#include<iostream>
using namespace std;

double xmin,xmax,ymin,dx;

double f(double x, double y)
{
    return (x*x + y);
}

int main()
{
    cout<<"\nEnter initial x value : ";
    cin>>xmin;
    cout<<"\nEnter final x value : ";
    cin>>xmax;
    cout<<"\nEnter initial y value : ";
    cin>>ymin;
    cout<<"\nEnter dx : ";
    cin>>dx;
    int num = (int)((xmax-xmin)/dx);
    double x[num+2],y[num+2];
    double k1,k2,k3,k4;
    x[0] = xmin;
    y[0] = ymin;
    for(int i=1;i<=num+1;i++)
    {
        x[i] = x[i-1] + dx;
        k1 = dx*f(x[i-1],y[i-1]);
        k2 = dx*f(x[i-1]+(dx/2),y[i-1]+(k1/2));
        k3 = dx*f(x[i-1]+(dx/2),y[i-1]+(k2/2));
        k4 = dx*f(x[i-1]+dx,y[i-1]+k3);
        y[i] = y[i-1] + (k1 + 2*k2 + 2*k3 + k4)/6;
        cout<<"\n"<<x[i-1]<<"\t"<<y[i-1];
    }
}

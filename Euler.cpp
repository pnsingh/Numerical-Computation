#include<iostream>
using namespace std;

double dx;
double xmin, xmax, ymin;

double f(double x, double y)
{
    return (-y);
}

double fact(int n)
{
    if(n==1) return 1;
    else return n*fact(n-1);
}

int main()
{
    cout<<"\nEnter initial value of x : ";
    cin>>xmin;
    cout<<"\nEnter final value of x : ";
    cin>>xmax;
    cout<<"\nEnter initial value of y : ";
    cin>>ymin;
    cout<<"\nEnter small change in x : ";
    cin>>dx;
    int num = (int)((xmax-xmin)/dx);
    double xy[num+2][2];
    xy[0][0] = xmin;
    xy[0][1] = ymin;
    for(int i=1;i<=num;i++)
    {
        xy[i][0] = xy[i-1][0] + dx;
        xy[i][1] = xy[i-1][1] + f(xy[i-1][0],xy[i-1][1])*dx;
        cout<<"\n"<<xy[i-1][0]<<"\t"<<xy[i-1][1];
    }
    return 0;
}

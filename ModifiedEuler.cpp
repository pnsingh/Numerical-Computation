#include<iostream>

using namespace std;
double xmin,xmax,ymin, dx;
int iter;

double f(double x, double y)
{
    return (x*x + y);
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
    cout<<"\nIterations at each step : ";
    cin>>iter;
    int num = (int)((xmax-xmin)/dx);
    double xy[num+2][2];
    xy[0][0] = xmin;
    xy[0][1] = ymin;
    for(int i=1;i<=num+1;i++)
    {
        xy[i][0] = xy[i-1][0] + dx;
        xy[i][1] = xy[i-1][1] + f(xy[i-1][0],xy[i-1][1])*dx;
        for(int j=1;j<iter;j++)
        {
            xy[i][1] = xy[i-1][1] + (dx/2)*(f(xy[i-1][0],xy[i-1][1])+f(xy[i][0],xy[i][1]));
        }
        cout<<"\n"<<xy[i-1][0]<<"\t"<<xy[i-1][1];
    }

}

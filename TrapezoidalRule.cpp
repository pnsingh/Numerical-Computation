#include<iostream>

using namespace std;

double xmin,dx;
int num;
double sum;

int main()
{
    cout<<"\nEnter initial x : ";
    cin>>xmin;
    cout<<"\nEnter difference : ";
    cin>>dx;
    cout<<"\nEnter number of points : ";
    cin>>num;
    sum = 0.00;
    double x[num+2],y[num+2];
    for(int i=0;i<num;i++)
    {
        x[i] = xmin + (dx*i);
        cout<<"\nEnter value of y("<<x[i]<<") : ";
        cin>>y[i];
    }
    sum = y[0] + y[num-1];
    for(int i=1;i<num-1;i++)
    {
        sum = sum + (2*y[i]);
    }
    sum = (sum*dx)/2;
    cout<<"\nThe answer is : "<<sum;
}

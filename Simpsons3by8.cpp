#include<iostream>
using namespace std;

double xmin,dx;
int num,k;
double sum,temp = 0.00;

int main()
{
    cout<<"\nEnter initial x : ";
    cin>>xmin;
    cout<<"\nEnter difference : ";
    cin>>dx;
    cout<<"\nEnter number of points : ";
    cin>>num;
    double x[num+2],y[num+2];
    for(int i=0;i<num;i++)
    {
        x[i] = xmin + (dx*i);
        cout<<"\nEnter value of y("<<x[i]<<") : ";
        cin>>y[i];
    }
    sum = 0.00;
    if(num%3==0)
    {
        temp = (dx*(y[0]+4*y[1]+y[2]))/3;
        k = 3;
    }
    else if((num+1)%3==0)
    {
        temp = (dx*(y[0]+y[1]))/2;
        k = 2;
    }
    else k = 1;

    for(int i=k;i<num-1;i++)
    {
        if((i-k+1)%3==0)
            sum = sum + 2*y[i];
        else
            sum = sum + 3*y[i];
    }
    sum = sum + y[k-1] + y[num-1];
    sum = (sum*dx*3)/8;
    sum = sum + temp;
    cout<<"\nThe integral is : "<<sum;
}

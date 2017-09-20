#include<iostream>

using namespace std;

double mat[10][11];
double x[10],temp[10];
int size;

void printmat()
{
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size+1;j++)
               cout<<"  "<<mat[i][j];
        cout<<"\n";
    }
    cout<<"\n";
}


void initialize()
{
    for(int i = 0;i<size;i++)
    {
        cout<<"\nEnter coffecients for equation number "<<i+1<<" : ";
        for(int j=0;j<size+1;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter starting guess for x"<<i+1<<" : ";
        cin>>x[i];
        temp[i] = x[i]+10;
    }
}

void solve()
{
    double sum,xt=100.00, err;
    while(xt>0.5)
    {
        xt = 0.00;
        for(int i=0;i<size;i++)
            x[i] = temp[i];
        for(int i =0; i<size;i++)
        {
            sum = 0.00;
            for(int j=0;j<=size;j++)
            {
                if(i!=j) sum = sum + x[j]*mat[i][j];
            }
            temp[i] = mat[i][size] - sum/mat[i][i];
        }

        for(int i=0;i<size;i++)
        {
            if(abs(temp[i]-x[i]))>xt);
            xt = abs(temp[i]-x[i]);
        }
     }

    for(int i=0;i<size;i++)
        cout<<"\n\tx"<<i+1<<" : "<<x[i];
}

int main()
{
    cout<<"\nEnter number of equations : ";
    cin>>size;
    initialize();
    solve();
    return 0;
}

#include<iostream>
using namespace std;

double mat[10][11];
double temp[10][11];
int size;
int i,j,k;

void printmat()
{
    cout<<"\n";
    for(i=0;i<size;i++)
    {
        for(j=0;j<size+1;j++)
               cout<<"  "<<mat[i][j];
        cout<<"\n";
    }
    cout<<"\n";
}


void initialize()
{
    for(i = 0;i<size;i++)
    {
        cout<<"\nEnter coffecients for equation number "<<i+1<<" : ";
        for(j=0;j<size+1;j++)
        {
            cin>>mat[i][j];
            temp[i][j] = mat[i][j];
        }
        printmat();
    }
}

void LUdecompose()
{
    for(i =0;i<size;i++)
    {
        temp[i][i] = mat[i][i];
        for(k=0;k<size+1;k++)  mat[i][k] = mat[i][k]/temp[i][i];
        for(j = i+1;j<size;j++)
        {
            double tx = mat[j][i];
            for(k=0;k<size+1;k++)
                mat[j][k] = mat[j][k] - (mat[i][k]*tx);
        }
        printmat();

    }
}


void LUsolve()
{
    for(i=size-1;i>0;i--)
    {
         for(j = 0;j<i;j++)
        {
            double tx = mat[j][i];
            for(k=0;k<size+1;k++)
                {
                    mat[j][k] = mat[j][k] - (mat[i][k]*tx);
                }
        }
        printmat();
    }
}

void solve()
{
    LUdecompose();
    LUsolve();
    cout<<"\nThe solution is : \n\n";
    for(i=0;i<size;i++)
        cout<<"\n\t x"<<i+1<<" : "<<mat[i][size];

}


int main()
{
    cout<<"\nEnter number of equations : ";
    cin>>size;
    initialize();
    solve();
    return 0;
}

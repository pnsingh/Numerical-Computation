//Program to subtract two matrices

#include<iostream.h>
#include<process.h>
#include<conio.h>

int a[10][10],b[10][10],c[10][10];
void main()
{
	int i,j,m,n,p,q;
	clrscr();
	cout<<"Enter number of rows in matrix 1:-  ";
	cin>>m;
	cout<<"Enter number of columns in matrix 1:-  ";
	cin>>n;
	cout<<"Enter number of rows in matrix 2:-  ";
	cin>>p;
	cout<<"Enter number of columns in matrix 2:-  ";
	cin>>q;
	// checks for condition if matrices can be subtracted or not
	if(m!=p||n!=q)
	{
		cout<<"\n\nMatrices can't be subtracted\n"
		    <<"\nTerminating !!";
		getch();
		exit(0);

	}
	// Inputs the elements of matrix 1
	cout<<"\nInput matrix 1 rowwise\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
			cin>>a[i][j];
	}

	// Inputs the elements of matrix 2
	cout<<"\nInput matrix 2 rowwise\n";
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
			cin>>b[i][j];
	}
	clrscr();
	// Prints the matrix 1
	cout<<"\nMatrix 1 looks like this ";
	for(i=0;i<m;i++)
	{
		cout<<"\n";
		for(j=0;j<n;j++)
			cout<<a[i][j]<<"\t";
	}
	// Prints the Matrix 2
	cout<<"\n\nMatrix 2 looks like this ";
	for(i=0;i<p;i++)
	{
		cout<<"\n";
		for(j=0;j<q;j++)
			cout<<b[i][j]<<"\t";
	}
	// subtracts matrix b from a and stores the difference in matrix c
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		c[i][j]=a[i][j]-b[i][j];
	}
	// Prints the difference of two matrices
	cout<<"\n\nThe difference of two matrices is";
	for(i=0;i<m;i++)
	{
		cout<<"\n";
			for(j=0;j<n;j++)
		cout<<c[i][j]<<"\t";
	}
	getch();
}

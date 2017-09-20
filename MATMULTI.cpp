//Program to multiply two matrices

#include<iostream.h>
#include<conio.h>
#include<process.h>

int A[10][10],B[10][10],C[10][10],m,n,p,q,i,j,k;
void main()
{
	clrscr();
	cout<<"Enter number of rows in matrix 1:-  ";
	cin>>m;
	cout<<"Enter number of columns in matrix 1:-  ";
	cin>>n;
	cout<<"Enter number of rows in matrix 2:-  ";
	cin>>p;
	cout<<"Enter number of columns in matrix 2:-  ";
	cin>>q;

	// checks if the two arrays with given dimensions can be multiplied or not
	if(n!=p)
	{
		cout<<"\n\nMatrices can't be multiplied\nTerminating!!";
		getch();
		exit(0);
	}
	// stores the elements of matrix 1
	cout<<"\n\nEnter numbers in matrix 1 rowwise\n\n";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>A[i][j];
	// stores the elements of matrix 2
	cout<<"\n\nEnter numbers in matrix 2 rowwise\n\n";
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	cin>>B[i][j];
	clrscr();
	// prints the matrix 1
	cout<<"\nMatrix 1 looks like this ";
	for(i=0;i<m;i++)
	{
		cout<<"\n";
		for(j=0;j<n;j++)
			cout<<A[i][j]<<"\t";
	}
	// print the matrix 2
	cout<<"\n\nMatrix 2 looks like this ";
	for(i=0;i<p;i++)
	{
		cout<<"\n";
		for(j=0;j<q;j++)
			cout<<B[i][j]<<"\t";
	}
	// Calculates and prints the product of two matrices
	cout<<"\n\nProduct of Matrix 1 and Matrix 2 is ";
	for(i=0;i<m;i++)
	{
		cout<<"\n";
		for(j=0;j<q;j++)
		{
			C[i][j]=0;
			for(k=0;k<n;k++)
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			cout<<C[i][j]<<"\t";
		}
	}
	getch();
}








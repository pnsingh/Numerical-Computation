//Program to locate a number in the given list

#include<iostream.h>
#include<conio.h>

int list[10],number,found=0,loc[10];
void linsrch();
void main()
{
	clrscr();
	cout<<"Please enter the numbers (total 10) in the list\n\n";
	// Stores the number given by user in array
	for(int i=0;i<10;i++)
	{
		cin>>list[i];
	}
	clrscr();
	// Inputs the number to be searched
	cout<<"Please enter the number to be searched ";
	cin>>number;

	// call function for linear search
	linsrch();
	getch();
}
// function for linear search
void linsrch()
{       int i;
	for(int l=0;l<10;l++)
	loc[l]=0;

	// checks for the number in array and stores its location

	for(i=0;i<10;i++)
	{
		if(list[i]==number)
		{
			found=1;
			loc[i]=i+1;
		}
	}
	// Prints the location where the number was found
	if(found==1)
	{
		cout<<"The number "<<number<<" is found at "
		    <<"these location(s) in the list\n";
		for(int k=0;k<10;k++)
		{
			if(loc[k]!=0)
			cout<<loc[k]<<"  ";
		}

	}
	// Promts if number is not found
	else
		cout<<"The number "<<number<<" is not found !";
}




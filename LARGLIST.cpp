//Program to find the largest number in the given list

#include<iostream.h>
#include<conio.h>

int list[10],large,loc;
void large1();
int main()
{
	clrscr();
	cout<<"Please enter the numbers (total 10) in the list\n\n";
	// stores the inputted numbers in the list array
	for(int i=0;i<10;i++)
	{
		cin>>list[i];
	}
	clrscr();
	// call the function large1() to evaluate the largest number
	large1();
	getch();
}
// function to evaluate the largest number
void large1()
{       int i;
	large=list[0];
	// loop will check for largest number and stores the location 
	for(i=0;i<10;i++)
	{
		if(list[i]>large)
		{
			large=list[i];
			loc=i+1;
		}
	}
	cout<<"The largest number is "<<large<<" and is "
	    <<"found at location "<<loc<<" in the list";
}




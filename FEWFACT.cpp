//Program to calculate factorials of first 11 whole numbers

#include<iostream.h>
#include<conio.h>

double fact;
double fact1(double m);
void main()
{
	clrscr();
	cout<<"Here is the list of factorials of first 11 whole numbers\n\n";
	cout<<"Number\tFactorial\n";
	// loop will calculate factorial of 11 numbers
	for(double i=0;i<=10;i++)
	{

		// calls function fact1()
		fact=fact1(i);
		cout<<i<<"\t"<<fact<<"\n";
	}
	getch();
}
// Function to calculate the factorial
double fact1(double m)
{
	// number is sequencially multiplied the (number - 1)
	// till the number becomes 1
	if(m==0)
	{
		return 1;
	}
	else
	{
		return m*fact1(m-1);
	}
}
//Program to calculate factorial of a given number

#include<iostream.h>
#include<conio.h>

double number,fact;
double fact1(double m);
void main()
{
	clrscr();
	// stores number given by user
	cout<<"Enter the number ";
	cin>>number;
	// calculates factorial by calling function fact1()
	fact=fact1(number);
	// Prints the number and its factorial
	cout<<"\nFactorial of given number "<<number<<" is "<<fact;
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

//Program to find the largest of three numbers

#include<iostream.h>
#include<conio.h>

int a,b,c,large;
void main()
{
	clrscr();
	cout<<"Please enter the three numbers \n\n";
	cin>>a>>b>>c;
	// checks if a is largest
	if(a>b&&a>c)
	large=a;
	// checks if c is largest
	else if(b>c)
	large=b;
	// if above conditions are false
	// then c is largest
	else
	large =c;
	// prints the largest number
	cout<<"The largest of the three numbers is "
	    <<large;
	getch();
}

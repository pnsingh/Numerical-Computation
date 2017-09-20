//This program calculates the value of area of a circle
//when radius of the circle is provided

#include<iostream.h>
#include<conio.h>
#define pi 3.14

float rad, area;
void main()
{
	clrscr();
	// promts the user to input radius
	cout<<"Please enter the value (in units) of the radius of circle ";
	cin>>rad;
	// calculate area and store it to float variable area
	area=pi*rad*rad;
	// prints the calculated area
	cout<<"\nThe area of the given circle is "<<area<<" units-squared";
	cout<<"\n\nThank You";
	getch();
}

//Program to calculate volume of a sphere when radius of sphere
//is provided

#include<iostream.h>
#include<conio.h>
#define pi 3.14

float rad, vol;
void main()
{
	clrscr();
	cout<<"Please enter the value (in units) of the radius"
	    <<" of sphere ";
	// store radius of circle in variable rad
	cin>>rad;
	// evaluares the volume and stores in variable vol
	vol=4*pi*rad*rad*rad/3;
	// prints the calculated volume
	cout<<"\nThe value of the volume of given sphere is "
	    <<vol<<" units-cube";
	cout<<"\n\nThank You";
	getch();
}


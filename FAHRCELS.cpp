//Program to convert temperature value given in Fahrenheit
//into Celsius

#include<iostream.h>
#include<conio.h>

using namespace std;
float fahr, cels;
//clrscr();
int main()
{

	cout<<"Please enter temperature value in Fahrenheit ";
	// stotres the temp in fahr variable
	cin>>fahr;
	// calculates the temperature in celcius
	cels=5*(fahr-32)/9;
	// Print the calculated temperature in celcius
	cout<<"\nThe temperature value in celsius is "<<cels;
	cout<<"\n\nThank You";
	getch();
}

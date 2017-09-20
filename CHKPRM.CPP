//Program to check whether a given number is prime

#include<iostream.h>
#include<conio.h>

int number,prime=1;
void chkprm();
int main()
{
	//prompts the user to input the number
	cout<<"Please enter the number ";
	cin>>number;
	chkprm();// calls the function which checks if
			// number is prime
	getch();
}
void chkprm()     // the function which checks if
			// number is prime
{
	for(int i=2;i<number;i++) //starting from 2, divide by all the integers before
	{                         //given number
		if(number%i==0) //if any of those integers could divide the given number
		{
			prime=0;   //the given number is not prime
		}
	}
	if(prime==0)
	cout<<"\nGiven number "<<number<<" is not a prime number";
	else
	cout<<"\nGiven number "<<number<<" is a prime number";
}

//Program to find first 100 prime numbers

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int counter=0,num=2,check=1,prime[100];
	while(counter<100) //if 100 numbers have been printed
	{
		for(int i=2;i<num;i++)//starting from 2, divide by all the integers
		{                      //before it
			if(num%i==0)    //if any integer could divide the given number
	 {
				check=0; //then given number is not prime
	    break;
	 }
	 else
		check=1;
		}
		if(check==1) //if number is prime, store it in array
		{
			prime[counter]=num;
	 counter++;  //increase the counter by 1
		}
      num++;  //increase the number by 1, so that next number can be checked
	}
	cout<<"First 100 Prime numbers \n\n";
	for(int k=0;k<100;k++)
	{
		cout<<prime[k]<<"\t";
	}
	getch();
}

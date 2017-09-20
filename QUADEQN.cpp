//Program to calculate roots of a quadratic equation

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
    clrscr();
    float a,b,c;
    float x1,x2,disc;
    cout<<"Please enter values of a, b and c in ax^2 + bx +c\n";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    //calculate square of discriminant
    disc=(b*b)-(4*a*c);
    if(disc>=0) //if square of discriminat is positive
    {
	x1=((-b)+sqrt(disc))/(2*a);
	x2=((-b)-sqrt(disc))/(2*a);
	if(disc>0)
	{
		cout<<"\nThe given quadratic equaton has real and"
		    <<" unequal roots given by "<<"\nx1= "<<x1
		    <<"\nand\nx2= "<<x2;
	}
	else
	{
		cout<<"\nThe given quadratic equtaion has real and"
		    <<" equal roots given by\nx= "<<x1;
	}
    }
    else
    {
	disc=sqrt(-disc);  //calculate sqrt of negative of square of discriminant
			   //when square of discriminant is negative
	cout<<"\nThe given quadratic equation has non-real roots given"
	<<" by\nx1 = "<<(-b)/(2*a)<<" +i "<<disc/(2*a)<<"\nand\nx2 = "
	<<(-b)/(2*a)<<" -i "<<disc/(2*a);
    }
    getch();
}

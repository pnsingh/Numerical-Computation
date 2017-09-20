//Program to arrange a list of numbers in ascending order

#include<iostream.h>
#include<conio.h>

void bubblesort(int[],int);
void main()
{
	clrscr();
	int ar[50],n;
	//prompts the user to enter the number of elements in the list
	cout<<"How many element do you want in the list (MAX 50): ";
	cin>>n;
	//prompts the user to enter the numbers in the list
	cout<<"\nEnter elements\n";
	//loop for storing the numbers in the list
	for(int i=0;i<n;i++)
		cin>>ar[i];
	cout<<"\n";
	bubblesort(ar,n); // calls the sorting function
	cout<<"\n\nThe list in ascending order is :";
	for(i=0;i<n;i++)
	cout<<"\t"<<ar[i];
	cout<<endl;
	getch();
}
void bubblesort(int ar[],int size)  // the sorting function
{
	int temp,ctr=0;
	for(int i=0;i<size;i++) //loop to navigate through the list
	{
		for(int j=0;j<(size-1)-i;j++) //in the i'th iteration, we only need
			{// to check numbers at locations from 0 to size-1-i,later numbers
			 //are already sorted
				if (ar[j]>ar[j+1])//if the number is greater than
					{ //next number in list, swap the numbers
						temp=ar[j];
						ar[j]=ar[j+1];
						ar[j+1]=temp;
					}
			}
	cout<<"List after iteration "<<++ctr<<" is:\t";
	//print the partially sorted list after i'th iteration
	for(int k=0;k<size;++k)
		 cout<<ar[k]<<"\t";
	cout<<endl;
  }
}

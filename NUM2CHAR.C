#include<stdio.h>
#include<conio.h>

void num2char(int x)
{
	int i,limit=0;
	char conv[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};		//2D array used since first size stores the number of elements and second one stores the maximum size of an element
	for(i=0;i<10;i++)
	{
		if(x==i)
		{
			printf("\nNumber : %s",conv[i]);
		}
		else
		{
			limit++;
		}
	}
	if (limit>0)
	{
		printf("\nNumber out of limit");
	}
}

void main()
{
	int num;
	clrscr();
	printf("\nEnter a number : ");
	scanf("%d",&num);
	num2char(num);
	getch();
}
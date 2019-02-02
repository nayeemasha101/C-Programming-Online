#include<stdio.h> // Question no. 3(a)
#include<conio.h>

void main()
{
		clrscr();
		int a[50]={0},nth, i,*p= NULL;
		printf("\nEnter size of array A: ");
		scanf("%d", &nth);
		p = &a[0];
		printf("\nEnter sorted elements of array A:\n");
		for(i=1; i<=nth; i++)
		{
			printf("Value %d: ",i);
			scanf("%d", &*p);
			p++;
		}
		
		printf("\nReverse order of sorted elements of array A:\n");
		p--;
		while( nth!=0)
		{
			printf(" %d",*p);
			p--;
			nth--;
		}
		getch();
}
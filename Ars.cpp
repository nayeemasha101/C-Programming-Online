#include<stdio.h>// Question no. 2(f)
#include<conio.h>

struct Student
{
	int id;
	float sub_marks[5],total;
}s[5];

void main()
{
	clrscr();
	int i,j,nth,Temp_id;
	float marks,Temp_marks;
	printf("Enter number of student : ");
	scanf("%d",&nth);
	for(i=0;i<nth;i++)
	{
		s[i].total = 0;
		printf("\nEnter ID of a student : ");
		scanf("%d",&s[i].id);

		printf("Enter marks of student no. %d: \n",i+1);
		for(j=0;j<3;j++) // for three subjects
		{
			printf("Subject %d Mark: ",j+1);
			scanf("%f",&marks);
			s[i].sub_marks[j] = marks;
			s[i].total += s[i].sub_marks[j];
		}
	}
	for(j=0;j<nth;j++)
	{
		for(i=0;i<nth-j;i++)
		{
			if(s[i].total < s[i+1].total)
			{
				// Marks exchanging
				Temp_marks = s[i].total;
				s[i].total = s[i+1].total;
				s[i+1].total = Temp_marks;
				// ID exchanging
				Temp_id = s[i].id;
				s[i].id = s[i+1].id;
				s[i+1].id = Temp_id;
			}
		}
	}
	for(i=0;i<nth;i++)
			printf("\nPosition No. %d Student ID is %d and Marks = %f ",i+1,s[i].id,s[i].total);
	getch();
}

	
	/*Odd and Even Test*/
	#include<stdio.h>
	#include<math.h>

	int main()
	{
		int a;
		printf("Enter an integer : ");
		scanf("%d",&a);
		if(a %  2 == 0)
		printf("%d is Even Number.",a);
		else
		printf("%d is Odd Number.",a);
		return 0;
	}
	/*End*/

	/* Area and circumference Of Circle  */
	#include<stdio.h>
	#include<math.h>
	#define pi 3.1416

	main()
	{
		float rad,area, circumference;
		printf("Enter the value of Radious: ");
		scanf("%f",&rad);
		area = pi * pow(rad,2);
		circumference = 2 * pi * rad;
		printf("Area of Circle is : %.3f",area);
		printf("circumference of Circle is : %.3f",circumference);
	}/* End */

	// A Code For Finding Largest number among three numbers
	#include<stdio.h>

	int main()
	{
			int a,b,c;
			printf("\nEnter Three Numbers: ");
			scanf("%d %d %d",&a,&b,&c);
			if(a>b)
			{
				if(a>c)
					printf("\nLargest Value is: %d",a);
				else
					printf("\nLargest Value is: %d",c);
			}
			else
			{
				if(b>c)
					printf("\nLargest Value is: %d",b);
				else
					printf("\nLargest Value is: %d",c);
			}
	}/*END*/

	// A Code For Finding Smallest number among three numbers
	#include<stdio.h>

	int main()
	{
			int a,b,c;
			printf("\nEnter Three Numbers: ");
			scanf("%d %d %d",&a,&b,&c);
			if(a<b)
			{
				if(a<c)
					printf("\nSmallest Value is: %d",a);
				else
					printf("\nSmallest Value is: %d",c);
			}
			else
			{
				if(b<c)
					printf("\nSmallest Value is: %d",b);
				else
					printf("\nSmallest Value is: %d",c);
			}
	}/*END*/

	/*finding a value whether it is Integer Number or Real Number */
	#include<stdio.h>
	int main()
	{
		int a;
		float val;
		scanf("%f",&val);
		a = val; // Type casting
		if(a == val)
			printf("%f is Integer Number.", val);
		else
			printf("%f is Real Number.", val);
	}/* End */

	/*finding a value whether it is Character or numeric or Special Character */
	#include<stdio.h>
	int main()
	{
		int a;
		char  val;
		scanf("%c",&val);
		a = val;
		if(a>=48 && a<=57)
			printf("This is Numeric Number.");
		else if((a>=65 && a<=90) || (a>=97 && a<=122) )
			printf("This is a Character.");
		else
			printf("This is a Special Character.");
		return 0;
	}/* End */

	/*finding all possible solution of Quadric Equation*/
	#include<stdio.h>
	#include<math.h>

	int main()
	{
		float a,b,c,x,x1,x2,d;
		printf("Enter value of A : ");
		scanf("%f",&a);
		printf("Enter value of B : ");
		scanf("%f",&b);
		printf("Enter value of C : ");
		scanf("%f",&c);
		d = b*b - 4*a*c;
		if(d==0)
		{
			x = - b / (2*a);
			printf("Unique Solution is : %f",x);
		}
		else if(d>0)
		{
			x1 = (-b + sqrt(d)) / (2*a);
			x2 = (-b - sqrt(d)) / (2*a);
			printf("Result is : %.3f  %.3f",x1,x2);
		}
		else
			printf("No Real Solution.");
		return 0;
	}
	/*End*/

	/*Finding whether a number is Odd or Even*/
	#include<stdio.h>

	int main()
	{
		int n;
		printf("Enter a value: ");
		scanf("%d",&n);
		if(n % 2 != 0)
		   printf("%d is Odd Number.",i);
		else
		   printf("%d is even Number.",i);
		return 0;
	}
	/* End */
	
	/*Finding the following pattern
	
        *
        * *
        * * *
	*/
	#include<stdio.h>

	int main()
	{
		int i,n,j;
		printf("Enter Nth value: ");
		scanf("%d",&n);
		printf("Desired Pattern :\n");
		for(i=1;i<=n;i++)
		   {
            for(j=1;j<=i;j++)
                printf("*");
            printf("\n");
		   }
		return 0;
	}
	/* End */
	
	/*Finding the following pattern

        * * *
        * *
        *
	*/
	#include<stdio.h>

	int main()
	{
		int i,n,j;
		printf("Enter Nth value: ");
		scanf("%d",&n);
		printf("Desired Pattern :\n\n");
		for(i=1;i<=n;i++)
		   {
            for(j = n ;j >(i-1);j--)
                printf("* ");
            printf("\n");
		   }
		return 0;
	}/* End */
	
	/*Finding the following pattern

        1
        2 2
        3 3 3
        4 4 4 4
	*/
	#include<stdio.h>

	int main()
	{
		int i,n,j;
		printf("Enter Nth value: ");
		scanf("%d",&n);
		printf("Desired Pattern :\n\n");
		for(i=1;i<=n;i++)
		   {
            for(j=1;j<=i;j++)
                printf("%d ",i);
            printf("\n");
		   }
		return 0;
	}
	/* End */
	
	/*Finding the following pattern

        1
        1 2
        1 2 3
        1 2 3 4
	*/
	#include<stdio.h>

	int main()
	{
		int i,n,j;
		printf("Enter Nth value: ");
		scanf("%d",&n);
		printf("Desired Pattern :\n\n");
		for(i=1;i<=n;i++)
		   {
            for(j=1;j<=i;j++)
                printf("%d ",j);
            printf("\n");
		   }
		return 0;
	}
	/* End */

	/*Finding Odd and even numbers from Nth numbers*/
	#include<stdio.h>

	int main()
	{
		int i,n;
		printf("Enter Nth value: ");
		scanf("%d",&n);
		printf("Odd numbers are:\n ");
		for(i=1;i<=n;i++)
		   {
			   if(i % 2 != 0)
				   printf(" %d",i);
		   }
		printf("\nEven numbers are:\n ");
		for(i=1;i<=n;i++)
		   {
			   if(i % 2 == 0)
				   printf(" %d",i);
		   }
		return 0;
	}
	/* End */


	/*Sum of Nth number of the series sum = 1 + 1/2 + 1/3 + ...+ 1/n */
	#include<stdio.h>

	int main()
	{
		float i,n, sum=0;
		printf("Enter Nth value: ");
		scanf("%f",&n);
		for(i=1;i<=n;i++)
		   {
			 sum += (float) 1 / i;
		   }
		printf("\nSum of Nth elements is: %f",sum);
		return 0;
	}
	/* End */

	/* Finding Maximum value from Nth values */
	#include<stdio.h>

	int main()
	{
		int ar[100]={0},i,nth,Max;
		printf("Enter nth value of an Array: ");
		scanf("%d",&nth);

		for(i=0; i<nth; i++)
		{
			printf("Enter value of an Array[%d]: ",i+1);
			scanf("%d",&ar[i]);
		}
		Max =  ar[0];
		for(i=0; i<nth; i++)
		{
			if(Max < ar[i])
			   Max = ar[i];
		}
		printf("Maximum Value is: %d",Max);
		return 0;
	}
	/* End */
	
	/*Finding the factorial of nth value using Recursive function*/
	#include<stdio.h>

	int factorial(long int n)
	{
        if(n==1)
            return 1;
        else
            return n * factorial(n-1);
	}
	int main()
	{
		long int N, fact;
		printf("Enter a value: ");
		scanf("%ld",&N);
		fact = factorial(N);
		printf("Factorial of %ld is: %ld",N,fact);
		return 0;
	}
	/* End */

	// A Code For Finding GCD(Greatest Common Divisor) between two numbers
	#include<stdio.h>

	int main()
	{
			int a,b,r,gcd=0,temp;
			printf("\nEnter Two Numbers: ");
			scanf("%d %d",&a,&b);
			if(a < b) // swapping value
			{
				temp=a;
				a=b;
				b=temp;
			}
			while(gcd==0)
			{
				r=a%b;
				if(r==0)
					gcd=b;
				else
				{
					a = b;
					b = r;
				}
			}
			printf("\nGCD is: %d",gcd);
	}/*END*/

	//Finding Fibonacci Series Up to Nth Number....
	#include<stdio.h>

	int main()
	{
			int i,fib,f0 = 0,f1 = 1,n;
			printf("\nEnter Nth value for Finding Fibonacci Series : ");
			scanf("%d", &n);
			for( i = 0; i <= n; i++ )
			{
				if( i == 0 || i == 1 )
					printf("%d", i);
				else
				{
					fib = f0 + f1;
					f0 = f1;
					f1 = fib;
					printf(" %d", fib);
				}
			}
		return 0;
	}/*END*/

	/* Finding the location of an element from Nth elements */
	#include<stdio.h>

	int main()
	{
		int ar[100]={0},i,nth,Loc = 0,item;
		printf("Enter nth value of an Array: ");
		scanf("%d",&nth);
		for(i=0; i<nth; i++)
		{
			printf("Enter value of an Array[%d]: ",i+1);
			scanf("%d",&ar[i]);
		}
		printf("Enter the value of Item: ");
		scanf("%d",&item);
		for(i=0; i<nth; i++)
		{
			if(item == ar[i])
			{
			   Loc = i+1;
			   break;
			}
		}
		if(Loc == 0)
			printf("Item does not found.");
		else
			printf("Location of given Item is : %d",Loc);
		return 0;
	}
	/* End */


	/*Sum of Nth number of the series sum = 1 + 1/4 + 1/9 + ...+ 1/n^2 */
	#include<stdio.h>

	int main()
	{
		float i,n, sum=0;
		printf("Enter Nth value: ");
		scanf("%f",&n);
		for(i=1;i<=n;i++)
		   {
			 sum += (float) 1 / (i*i);
		   }
		printf("\nSum of Nth elements is: %f",sum);
		return 0;
	}
	/* End */

	/*Sum of Nth number using Pointer*/
	#include<stdio.h>

	int main()
	{
		int A[100]={0},i,n,sum=0,*P;
		printf("Enter Nth value: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
			{
				printf("\nEnter value of A[%d]: ",i+1);
				scanf("%d",&A[i]);
			}
		P = A;
		for(i=0;i<n;i++)
		   {
			 sum += *P;
			 P++;
		   }
		printf("\nSum of Nth elements is: %d",sum);
		return 0;
	}
	/* End */
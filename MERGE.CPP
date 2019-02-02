#include <stdio.h>// Question no. 2(g)
#include<conio.h>
void main()
{
     int a[50], b[50], c[100], m, n, i, j, k=0;
     printf("\nEnter size of array A: ");
     scanf("%d", &m);
     printf("\nEnter sorted elements of array A(in ascending order):\n");
     for(i=0; i<m; i++)
	 {
		 printf("Value %d: \n",i+1);
         scanf("%d", &a[i]);
	 }
  
     printf("\nEnter size of array B: ");
     scanf("%d", &n);
     printf("\nEnter sorted elements of array B(in ascending order):\n");
     for(i=0; i<n; i++)
	 {
		  printf("Value %d: \n",i+1);
	      scanf("%d", &b[i]); 
	 }

     i=0;
     j=0;
     while(i<m && j<n)
     {
	       if(a[i] < b[j])
	       {
		       c[k] = a[i];
		       i++;
	       }
	       else
	       {
		   c[k] = b[j];
		   j++;
	       }
	       k++;
     }

     if(i >= m)
     {
	  while(j<n)
	  {
		    c[k] = b[j];
		    j++;
		    k++;
	  }
     }

     if(j >= n)
     {
	  while(i<m)
	  {
		    c[k] = a[i];
		    i++;
		    k++;
	  }
     }

     printf("\nAfter merging into Array C:\n");
     for(i=0; i<m+n; i++)
     {
              printf(" %d", c[i]);
     }
     getch();
}
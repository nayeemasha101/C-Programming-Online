//Patten Printing..........
#include<stdio.h>
int main()
 {
    int i,j,n;
    printf("\nEnter The Number Please :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf("*");
            }
        printf("\n");
    }
 return 0;
 }

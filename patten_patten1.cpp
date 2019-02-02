//Patten Printing.....
#include<stdio.h>
int main()
 {
    int i,j,n;
    printf("\nEnter The Number Please :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf(" *");
            }
        printf("\n");
    }
    for(i=0;i<=n;i++)
        printf(" *");
    printf("\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf(" *");

        printf("\n");
    }


 }

//Serise Number Adding.......1/1+1/2+1/3+1/4+......1/nth
#include<stdio.h>
int main()
{
    float sum = 0,i = 0,n;
    printf("\nEmter The Nth Serial Please : ");
    scanf("%f",&n);
    for( i=1;i<=n;i++ )
    {
        sum +=1/i;
    }
    printf("The Result Of %fth Serise Is : %f",n,sum);
return 0;
}

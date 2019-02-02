//Serise Number Adding.......1/2+1/4+1/9+1/16+......1/nth
#include<stdio.h>
int main()
{
    float sum = 0,i = 0,n;
    printf("\nEmter The Nth Serial Please : ");
    scanf("%f",&n);
    for( i=1;i<=n;i++ )
    {
        sum +=1/(i*i);
    }
    printf("The Result Of %.1fth Serise Is : %.2f",n,sum);
return 0;
}

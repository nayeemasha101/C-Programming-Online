//Covart The Decimal Number To binary....
#include<stdio.h>
int main()
{
    int n=0,a,i,rem[i];
    printf("\nEnter The Decimal Number Please : ");
    scanf("%d",&a);
    for(i=1;a!=0;i++)
    {
        rem[i]=a%2;
        a /= 2;
        n++;
    }
    for(i=n;i>=0;i--)
        printf("%d",rem[i]);
return 0;
}

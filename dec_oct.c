//Covart The Decimal Number To Octal....
#include<stdio.h>
int main()
{
    int n=0,a,i,rem[1000]={0};
    printf("\nEnter The Decimal Number Please : ");
    scanf("%d",&a);
    for(i=1;a!=0;i++)
    {
        rem[i]=a%8;
        a /= 8;
        n++;
    }
    for(i=n;i>0;i--)
        printf("%d", rem[i]);
return 0;
}

//Code For Nth Powere Of Nth Value Using While loop....
#include<stdio.h>
int main()
{
    int n,count=1;
    float x,r=1.0;
    printf("\nEnter The Value : ");
    scanf("%f", &x);
    printf("\nEnter The Power Of The Value : ");
    scanf("%d", &n);
    while( count<=n )
    {
        r *= x;
        count++;
    }
    printf("\nThe Value Of X Is : %.2f\nThe Power N Is : %d\nThe Result Is : %.2f",x,n,r);

return 0;
}

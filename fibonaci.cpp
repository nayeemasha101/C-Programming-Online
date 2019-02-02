//Finding Fibonacci Series Up to Nth Number....
#include<stdio.h>
int main()
{
    int i,fib,f0 = 1,f1 = 1,n;
    printf("\nEnter The Intrger Number Please : ");
    scanf("%d", &n);
    for( i=0;i<=n;i++ )
    {
        if( i ==0 || i == 1 )
            printf("%d", i);
        else
        {
            fib = f0 + f1;
            f0 = f1;
            f1 = fib;
            printf("%d", fib);
        }
    }
return 0;
}

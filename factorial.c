//Code For Nth Number Of Factorial....
#include<stdio.h>
int main()
{
    int n,factorial = 1,i;
    printf("\nEnter The Number Of Factorial : ");
    scanf("%d", &n);
    for( i=n;i>=0;i-- )
    {
        if( i != 0 )
            factorial *= i;
        else
            factorial *= 1;
    }
    printf("The Result Of %d Is = %d", n, factorial);
return 0;
}

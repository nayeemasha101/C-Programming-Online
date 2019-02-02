//Find Out The Odd Number......
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("\nEnter The Number Please : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if( i%2==1)
        s += i;
    }
        printf("\nThe Result Of Odd Number Is : %d",s);

return 0;
}

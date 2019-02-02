//A Code For The Folloing Serise for Nth Number......
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0;
    printf("\nEnter The Number Of Nth Serise Please : ");
    scanf("%d", &n);
    for( i=1;i<=n;i++)
    {
        s = i*i;
    }
        printf("\nThe Result Of %dth Serise Is : %d",n,s);

return 0;
}

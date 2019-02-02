//Prime Number.........
#include<stdio.h>
int main()
{
    int i,itam,ok=1;
    printf("\nEnter The Number Please : ");
    scanf("%d",&itam);
    for( i=2;i<itam;i++ )
    {
        if( itam%i==0 )
        {
            ok=0;
            break;
        }
    }
    if( ok == 1 )
        printf("%d Is Prime Number.",itam);
    else
        printf("%d Is Not Prime Number.",itam);
return 0;
}

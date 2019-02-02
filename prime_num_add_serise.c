//Addition Of Prime Number Of Serise...........
#include<stdio.h>
int main()
{
    int nth,i,k,ok,count = 1,sum = 0;
    printf("\nEnter The Nth Number Please : ");
    scanf("%d",&nth);
    for(k=2;count<=nth;k++)
    {
        ok=1;
        for(i=2;i<=k/2;i++)
        {
            if(k%i==0)
            {
                ok=0;
                break;
            }
        }
        if(ok==1)
        {
            printf("%d",k);
            sum += k;
            count++;
        }
    }
    printf("\nSum Of %d prime Number Is : %d ",nth,sum);
return 0;
}

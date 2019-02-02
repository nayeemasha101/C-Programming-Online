//Find Out Largest Number Using Arrey..........
#include<stdio.h>
int main()


{
    int a[100],i,j,n,max;
    printf("\nEnter The Nth Value : ");
    scanf("%d",&n);
    for( i=0;i<n;i++ )
    {
        printf("\nEnter The Value a[%d] : ",i+1);
        scanf("%d", a[i]);
    }
    max = a[0];
    for( i=1;i<n;i++ )
    {
        if(max<a[i])
            max = a[i];
    }
    printf("Largets Value Is : %d", max);

return 0;
}

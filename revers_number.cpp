//Find Out The Revarce Number..........
#include<stdio.h>



int main()
{
    int a,rem;
    printf("\nEnter The Integar Number Please : ");
    scanf("%d",&a);
    for( ;a!=0; )
    {
        rem = a % 10;
        a /= 10;
        printf("%d",rem);
    }

return 0;
}

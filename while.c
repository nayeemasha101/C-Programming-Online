//Using While loop....
#include<stdio.h>

int main()
{
    int i=1,sum=0,n;
    printf("\nEnter A Number Please : ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum += i;
        i++;
    }
        printf("\nThe Result Is : %d", sum);

return 0;
}

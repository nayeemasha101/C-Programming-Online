//Findigng The Lower Number Using Nested if--else Statment.....
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter The First Number Please : ");
    scanf("%d", &a);
    printf("\nEnter The Second Number Please : ");
    scanf("%d", &b);
    printf("\nEnter The Therd Number Please : ");
    scanf("%d", &c);
        if( a<b )
        {
            if( a<c )
                printf("\nThe Lower Number Is : %d",a);
            else
                printf("\nThe Lower Number Is : %d",c);
        }
        else
        {
            if( b<c )
                printf("\nThe Lower Number Is : %d",b);
            else
                printf("\nThe Lower Number Is : %d",c);
        }
return 0;
}

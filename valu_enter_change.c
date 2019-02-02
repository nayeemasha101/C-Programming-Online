//Valu Enter Change......
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\nEnter A Valu Please : ");
    scanf("%d", &a);
    printf("\nEnter Another Valu Please : ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("%d  <===>  %d" , a , b);
return 0;
}

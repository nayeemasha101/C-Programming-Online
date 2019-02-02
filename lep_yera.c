//Find Out The Leap Year..................
#include<stdio.h>


int main()
{
    int year;
    printf("\nEnter A Year Please : ");
    scanf("%d",&year);
    if( year % 4 == 0 )
    {
        printf("%d Is A Leap Year." ,year);
    }
    else
        printf("%d Is Not A Leap Year." ,year);
return 0;
}

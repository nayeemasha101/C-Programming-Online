//Year Month Week days.....
#include<stdio.h>

int main()
{
    int year,month,week,day,G_day;
    printf("\nEnter The Number Of Days Please : ");
    scanf("%d", &G_day);
    year = G_day / 365;
    G_day %= 365;
    month = G_day / 30;
    G_day %= 30;
    week = G_day / 7;
    G_day %= 7;
    printf("\nThe Result Of Year = %d\nThe Result Of Month = %d\nThe Result Of Week = %d\nThe Result Of Day = %d", year,month,week,G_day);
return 0;
}

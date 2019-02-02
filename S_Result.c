//Make A Result Using Switch Statment....
#include<stdio.h>

int main()
{
    int Mark;
    printf("\nEnter The Marks Of Per Subject : ");
    scanf("%d", &Mark);
    Mark /= 10;
    switch(Mark)
    {
        case 10:
            printf("\nThe Result Is : A+");
            break;
        case 9:
            printf("\nThe Result Is : A+");
            break;
        case 8:
            printf("\nThe Result Is : A+");
            break;
        case 7:
            printf("\nThe Result Is : A");
            break;
        case 6:
            printf("\nThe Result Is : A-");
            break;
        case 5:
            printf("\nThe Result Is : B");
            break;
        case 4:
            printf("\nThe Result Is : C");
            break;
        default :
            printf("\nThe Result Is : Fail");
            break;
    }
return 0;
}

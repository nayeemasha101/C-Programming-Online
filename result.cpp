//Make A Result....
#include<stdio.h>

int main()
{
    int M;
    printf("\nEnter The Marks Of Per Subject : ");
    scanf("%d", &M);
    if(M>=80)
        printf("\nThe Result Is : A+");
    else if(M<=80 && M>=70)
        printf("\nThe Result Is : A");
    else if(M<=70 && M>=60)
        printf("\nThe Result Is : A-");
    else if(M<=60 && M>=50)
        printf("\nThe Result Is : B");
    else if(M<=50 && M>=40)
        printf("\nThe Result Is : C");
    else if(M<=40 && M>=33)
        printf("\nThe Result Is : D");
    else
        printf("\nThe Result Is : Fale");
return 0;
}

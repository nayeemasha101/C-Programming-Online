//Solve The Quardik Equation.....
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,p;
    float x,x1,x2;
    printf("\nPlease Enter The Number You Want To clculae : ");
    scanf("%d %d %d", &a, &b, &c);
    p = (b*b)-(4*a*c);
    if(p==0)
    {
        x = (float) -b/(2*a);
        printf("\nUnique Solution Is : %f",x);
    }
    else if( p > 0 )
    {
        x1 = (float) (- b + sqrt(p))/(2*a);
        x2 = (float) (- b - sqrt(p))/(2*a);
        printf("\n%3f %3f",x1,x2);
    }
    else
        printf("\nNo Real Solution");
return 0;
}

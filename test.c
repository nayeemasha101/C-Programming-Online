//A Code for Calculate User dehine Function.........


#include<stdio.h>
#include<math.h>

    Factorial ( int n)
    {
        int f = 1;
        while( n>=0 )
        {
            if ( n==0 )
                f *= 1;
            else
                f *= n;
            n--;
        return f;
        }

    }

int main()

{
    float Sum = 0,x;
    int i,nth,ispos = 0;
    printf("Enter The Number Please : ");
    scanf("%f %d",&x,&nth);

    i = 0;

    while( i < nth )
    {
        if( ispos == 0 )
        {
            Sum += pow( x,2i+1 )/Factorial(2i+1);
            ispos = 1;
        }
        else
        {
            Sum -= pow( x, 2i+1 )/Factorial(2i+1);
            ispos = 0;
        }
    }
    i++;
    printf(" %f", Sum);


return 0;
}

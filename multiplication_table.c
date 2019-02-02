//Multiplication Table............
#include<stdio.h>
int main()
{
    int i,j,A[3][4]={{7,5,8,4},{5,4,6,8},{2,3,5,6}};
    for( j=1;j<=3;j++ )
    {
        for( i=1;i<=4;i++ )
        {
            printf(" %d",A[j][i]);
        }
    printf("\n");
    }
return 0;
}

//Identity Matrich.........
#include<stdio.h>
int main()
{
    int row,col,i,j,Ar[100][100]={0};
    printf("\nEnetr The Number Of Row Please : ");
    scanf("%d",&row);
    printf("\nEnetr The Number Of Col Please : ");
    scanf("%d",&col);
    if( row==col)
    {
        for( i=0;i<row;i++ )
        {
            for( j=0;j<col;j++ )
            {
                if( i==j )
                    Ar[i][j]=1;
                else
                    Ar[i][j]=0;
            }
        }
        printf("\nIdentity Matrich.\n");
        for( i=0;i<row;i++ )
        {
            for( j=0;j<col;j++ )
            {
                printf("%d",Ar[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Can't Build Identity Matrich");
return 0;
}

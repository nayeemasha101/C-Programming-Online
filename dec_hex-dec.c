//Convert The Decimal Noumber To The Hexa_Decimal.......
#include<stdio.h>

int main()
{
    int Nu,i=0,j,temp,Hex_Ar[100]={0};
    printf("\nEnter The Decimal Number Please : ");
    scanf("%d",&Nu);
    while(Nu!=0)
    {
        temp=Nu % 16;
        if( temp >= 10 )
        {
            switch(temp)
            {
                case 10:
                        Hex_Ar[i]=65;
                        break;
                case 11:
                        Hex_Ar[i]=66;
                        break;
                case 12:
                        Hex_Ar[i]=67;
                        break;
                case 13:
                        Hex_Ar[i]=68;
                        break;
                case 14:
                        Hex_Ar[i]=69;
                        break;
                case 15:
                        Hex_Ar[i]=70;
                        break;
                default :
                    printf("\nError Happend");
            }
        }
        else
        {
            Hex_Ar[i]=temp;
        }
        Nu/= 16;
        i++;
    }
    i--;
    for( j=i;j>=0;j-- )
    {
        if( Hex_Ar[j]==65)
            printf("%c",Hex_Ar[j]);
        else if( Hex_Ar[j]==66)
            printf("%c",Hex_Ar[j]);
        else if( Hex_Ar[j]==67)
            printf("%c",Hex_Ar[j]);
        else if( Hex_Ar[j]==68)
            printf("%c",Hex_Ar[j]);
        else if( Hex_Ar[j]==69)
            printf("%c",Hex_Ar[j]);
        else if( Hex_Ar[j]==70)
            printf("%c",Hex_Ar[j]);
        else
            printf("%d",Hex_Ar[j]);
    }
return 0;
}

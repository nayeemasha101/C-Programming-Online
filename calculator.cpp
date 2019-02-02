//Simple Calculator...........
#include<stdio.h>
#include<math.h>
int main()
{
    int A,n1,n2,R1,R2,R3,i=0,k,Emp=1,id,n=0,nth,Nu,a,re,Hex_Ar[100]={0},j,rem[100]={ },itam,ok=1,s=0,temp,fib,f0=1,f1=1,year,month,week,G_day,factorial=1,count=1,sum=0;
    float Num1,Num2,Result,salary,bonus,T_salary,x,r=1.0;
    printf("\nWhat Operation Do You Want To Do Now ? :");
    printf("\nPress 1 For Addition.");
    printf("\nPress 2 For Subtraction.");
    printf("\nPress 3 For Multiplecation.");
    printf("\nPress 4 For Divition.");
    printf("\nPress 5 For Squear.");
    printf("\nPress 6 For Modulas.");
    printf("\nPress 7 For Find Out The Revers Number.");
    printf("\nPress 8 For Power Nth Value.");
    printf("\nPress 9 For Nth Serise.");
    printf("\nPress 10 For Finding Even Number And Addition.");
    printf("\nPress 11 For Finding Odd Number And Addition.");
    printf("\nPress 12 For Find Out The Leap Year Or Not.");
    printf("\nPress 13 For Finding The Nth Number Of  Fibonaci Sseries.");
    printf("\nPress 14 For Findigng Prime Number.");
    printf("\nPress 15 For Findigng Prime Number Serise.");
    printf("\nPress 16 For Findigng And Adding Prime Number Serise.");
    printf("\nPress 17 For Findigng The Largest Number.");
    printf("\nPress 18 For Findigng The Lower Number.");
    printf("\nPress 19 For Calculate The Year Month Week And Day.");
    printf("\nPress 20 For Calculate The Nth Number Of Factorial.");
    printf("\nPress 21 For Calculate Salary.");
    printf("\nPress 22 For Calculate Decimal To Binary Number.");
    printf("\nPress 23 For Calculate Decimal To Octal Number.");
    printf("\nPress 24 For Calculate Decimal To Hex_Decimal Number.\n");
    scanf("%d",&A);
    switch(A)
    {
    case 1:printf("Enter The First Number Please : ");
    scanf("%f", &Num1);
    printf("Enter The Second Number Please : ");
    scanf("%f", &Num2);
        Result = Num1 + Num2;
        printf("Addition Of Two Number Is : %.2f", Result);
        break;
    case 2: printf("Enter The First Number Please : ");
    scanf("%f", &Num1);
    printf("Enter The Second Number Please : ");
    scanf("%f", &Num2);
        Result = Num1 - Num2;
        printf("Subtraction Of Two Number Is : %.2f", Result);
        break;
    case 3: printf("Enter The First Number Please : ");
    scanf("%f", &Num1);
    printf("Enter The Second Number Please : ");
    scanf("%f", &Num2);
        Result = Num1 * Num2;
        printf("Multplecation Of Two Number Is : %.2f", Result);
        break;
    case 4: printf("Enter The First Number Please : ");
    scanf("%f", &Num1);
    printf("Enter The Second Number Please : ");
    scanf("%f", &Num2);
        Result = Num1 / Num2;
        printf("Divition Of Two Number Is : %.2f", Result);
        break;
    case 5: printf("Enter The First Number Please : ");
    scanf("%f", &Num1);
    printf("Enter The Second Number Please : ");
    scanf("%f", &Num2);
    printf("\nEnter The Power Of First Number : ");
    scanf("%d", &n1);
    printf("Enter The Power Of Second Number : ");
        scanf("%d", &n2);
        Result = pow(Num1,n1) + pow(Num2,n2);
        printf("Squeare Of Addition Two Number Is : %.2f", Result);
        break;
    case 6: printf("Enter The First Number Please : ");
    scanf("%d", &R1);
    printf("Enter The Second Number Please : ");
    scanf("%d", &R2);
        R3 = R2%R1;
        printf("Modulas Of Two Number Is : %d", R3);
        break;
    case 7:printf("Enter The Integar Number Please : ");
    scanf("%d",&a);
        for( ;a!=0; )
        {
            re = a % 10;
            a /= 10;
            printf("%d",re);
        }
        break;
    case 8: printf("Enter The Value Please : ");
    scanf("%f", &x);
    printf("Enter The Power Of The Value Please : ");
    scanf("%d", &n);
        while( count<=n )
        {
            r *= x;
            count++;
        }
    printf("The Value Of X Is : %.2f\nThe Power N Is : %d\nThe Result Is : %.2f",x,n,r);
        break;
    case 9: printf("Enter The Number Of Nth Serise Please : ");
    scanf("%d", &n);
        for( i=1;i<=n;i++)
        {
            s = i*i;
        }
        printf("The Result Of %dth Serise Is : %d",n,s);
        break;
    case 10: printf("Enter The Number Please : ");
    scanf("%d", &n);
        for(i=1;i<=n;i++)
        {
            if( i%2==0)
            s += i;
        }
        printf("The Result Of Even Number Is : %d",s);
        break;
    case 11: printf("Enter The Number Please : ");
    scanf("%d", &n);
        for(i=1;i<=n;i++)
        {
            if( i%2==1)
            s += i;
        }
        printf("The Result Of Odd Number Is : %d",s);
        break;
    case 12:printf("\nEnter A Year Please : ");
    scanf("%d",&year);
    if( year % 4 == 0 )
    {
        printf("%d Is A Leap Year." ,year);
    }
    else
        printf("%d Is Not A Leap Year." ,year);
        break;
    case 13: printf("\nEnter The Intrger Number Please : ");
    scanf("%d", &n);
        for( i=1;i<=n;i++ )
        {
            if( i ==0 || i == 1 )
                printf("%d", i);
            else
            {
                fib = f0 + f1;
                f0 = f1;
                f1 = fib;
                printf("%d",fib);
            }
        }
        break;
    case 14: printf("\nEnter The Number Please : ");
    scanf("%d",&itam);
    for( i=2;i<itam;i++ )
    {
        if( itam%i==0 )
        {
            ok=0;
            break;
        }
    }
    if( ok == 1 )
        printf("%d Is Prime Number.",itam);
    else
        printf("%d Is Not Prime Number.",itam);
        break;
    case 15:printf("\nEnter The Nth Number Please : ");
    scanf("%d",&nth);
    for(k=2;count<=nth;k++)
    {
        ok=1;
        for(i=2;i<=k/2;i++)
        {
            if(k%i==0)
            {
                ok=0;
                break;
            }
        }
        if(ok==1)
        {
            printf("%d ",k);
            count++;
        }
    }
    printf("\nThat Is Prime Number Serise.");
        break;
    case 16:printf("\nEnter The Nth Number Please : ");
    scanf("%d",&nth);
        for(k=2;count<=nth;k++)
        {
            ok=1;
            for(i=2;i<=k/2;i++)
            {
                if(k%i==0)
                {
                    ok=0;
                    break;
                }
            }
            if(ok==1)
            {
                printf("%d ",k);
                sum += k;
                count++;
            }
        }
        printf("\nSum Of %d prime Number Is : %d ",nth,sum);
        break;
    int a,b,c;
    case 17: printf("Enter The First Number Please : ");
    scanf("%d", &a);
    printf("Enter The Second Number Please : ");
    scanf("%d", &b);
    printf("Enter The Therd Number Please : ");
    scanf("%d", &c);
        if( a>b )
        {
            if( a>c )
                printf("\nThe Largest Number Is : %d",a);
            else
                printf("\nThe Largest Number Is : %d",c);
        }
        else
        {
            if( b>c )
                printf("\nThe Largest Number Is : %d",b);
            else
                printf("\nThe Largest Number Is : %d",c);
        }
        break;
    case 18: printf("Enter The First Number Please : ");
    scanf("%d", &a);
    printf("Enter The Second Number Please : ");
    scanf("%d", &b);
    printf("Enter The Therd Number Please : ");
    scanf("%d", &c);
        if( a<b )
        {
            if( a<c )
                printf("\nThe Lower Number Is : %d",a);
            else
                printf("\nThe Lower Number Is : %d",c);
        }
        else
        {
            if( b<c )
                printf("\nThe Lower Number Is : %d",b);
            else
                printf("\nThe Lower Number Is : %d",c);
        }
        break;
    case 19: printf("Enter The Number Of Days Please : ");
    scanf("%d", &G_day);
        year = G_day / 365;
        G_day %= 365;
        month = G_day / 30;
        G_day %= 30;
        week = G_day / 7;
        G_day %= 7;
        printf("\nThe Result Of Year = %d\nThe Result Of Month = %d\nThe Result Of Week = %d\nThe Result Of Day = %d",year,month,week,G_day);
        break;
    case 20: printf("Enter The Number Of Factorial Please : ");
    scanf("%d", &n);
        for( i=n;i>=0;i-- )
        {
            if( i != 0 )
                factorial *= i;
            else
                factorial *= 1;
        }
        printf("The Result Of %d Is = %d", n, factorial);
        break;
    case 21:printf("Enter The Number Of Id Please : ");
    scanf("%d",&n);
    start:
    printf("\nEnter The Id Number Please : ");
    scanf("%d",&id);
    printf("\nEnter The Amount Of Salary Please : ");
    if(id%2 != 0)
        goto oddid;
    else
       goto evenid;
    oddid:
    scanf("%f",&salary);
        bonus = salary*40/100;
        T_salary = bonus + salary;
        printf("The Salary Of Odd Number Employe : %.2f",T_salary);
        Emp++;
        if( Emp<=n)
            goto start;
        else
            goto end;
    evenid:
    scanf("%f", &salary);
        bonus = salary*50/100;
        T_salary = bonus + salary;
        printf("The Salary Of Even Number Employe : %.2f",T_salary);
        Emp++;
        if( Emp<=n)
            goto start;
        else
            goto end;
    end:
        break;
    case 22:printf("Enter The Decimal Number Please : ");
    scanf("%d",&a);
        for(i=1;a!=0;i++)
        {
            rem[i]=a%2;
            a /= 2;
            n++;
        }
        for(i=n;i>0;i--)
            printf("%d",rem[i]);
        break;
    case 23:printf("Enter The Decimal Number Please : ");
    scanf("%d",&a);
        for(i=1;a!=0;i++)
        {
            rem[i]=a%8;
            a /= 8;
            n++;
        }
        for(i=n;i>0;i--)
            printf("%d", rem[i]);
        break;
    case 24:printf("Enter The Decimal Number Please : ");
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
        break;
    default:
        printf("Press Wrong Inpute.");
    }
return 0;
}

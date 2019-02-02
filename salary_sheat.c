//Salary Sheat....
#include<stdio.h>
int main()
{
    int id,n,Emp=1;
    float salary,bonus,T_salary;
    printf("\nEnter The Number Of Id Please : ");
    scanf("%d", &n);
    start:
    printf("\nEnter The Id Number Please : ");
    scanf("%d", &id);
    printf("\nEnter The Amount Of Salary Please : ");
    if(id%2 != 0)
        goto oddid;
    else
       goto evenid;
    oddid:
    scanf("%f", &salary);
        bonus = salary*40/100;
        T_salary = bonus + salary;
        printf("\nThe Salary Of Odd Number Employe : %.2f",T_salary);
        Emp++;
        if( Emp <=n)
            goto start;
        else
            goto end;
    evenid:
    scanf("%f", &salary);
        bonus = salary*50/100;
        T_salary = bonus + salary;
        printf("\nThe Salary Of Even Number Employe : %.2f",T_salary);
        Emp++;
        if( Emp <=n)
            goto start;
        else
            goto end;
    end:
return 0;
}

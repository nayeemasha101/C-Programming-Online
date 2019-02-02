//Find Out The Palindrome...........
#include<stdio.h>

int main()
{
    char s1[100]=" ",s2[100]=" ";
    printf("\nEnter A String : ");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    if(strcmp(s1,s2)==0)
        printf("This String Is Palindrome : ");
    else
        printf("This String Is Not Palindrome : ");


return 0;
}

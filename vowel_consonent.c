//Finding a charecter whether it is Vowel or Consonent or Spechal Symbole or Numaric Number...
#include<stdio.h>
int main()
{
    char chr;
    printf("\nEnter A Charecter For Testing : ");
    scanf("%c", &chr);
    if(chr=='A'||chr=='a'||chr=='E'||chr=='e'||chr=='I'||chr=='i'||chr=='O'||chr=='o'||chr=='U'||chr=='u')
            printf("\nIt is Vowel.");
    else if(chr=='B'||chr=='b'||chr=='C'||chr=='c'||chr=='D'||chr=='d'||chr=='F'||chr=='f'||chr=='G'||chr=='g'||
            chr=='H'||chr=='h'||chr=='J'||chr=='j'||chr=='K'||chr=='k'||chr=='L'||chr=='l'||chr=='M'||chr=='m'||
            chr=='N'||chr=='n'||chr=='P'||chr=='p'||chr=='Q'||chr=='q'||chr=='R'||chr=='r'||chr=='S'||chr=='s'||
            chr=='T'||chr=='t'||chr=='V'||chr=='v'||chr=='W'||chr=='w'||chr=='X'||chr=='x'||chr=='Y'||chr=='y'||
            chr=='Z'||chr=='z')
                printf("\nIt is Consonent. ");
    else if(chr=='0'||chr=='1'||chr=='2'||chr=='3'||chr=='4'||chr=='5'||chr=='6'||chr=='7'||chr=='8'||chr=='9')
                printf("\nIt is Numaric Number. ");
    else
        printf("\nIt is Spechal Symbole. ");

return 0;
}

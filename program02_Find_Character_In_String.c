//Finding Character in String

#include<stdio.h>
#define true 1
#define false 0
typedef int Bool;
int func(char *a,char c)
{
    while (*a!='\0')
    {
        if (*a==c)
        {
            return true;
        }
        a++;
    }

}
int main()
{
    char a[100];
    char c;
    printf("Enetr String : ");
    scanf("%[^'\n]s",a);
    printf("\nEnter Character : ");
    scanf(" %c",&c);
    Bool b= func(a,c);
    if(b)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not Found");
    }
}
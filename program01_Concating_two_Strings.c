//Concating Two String

#include<stdio.h>

int conca(char a[],char b[])
{
    if(a==NULL || b==NULL){
         return 0;
    }
    while(*a!='\0'){
         *a++;
    }
    *a = ' ';
    *a++;
    while(*b!='\0') 
    {
        *a=*b;
        *a++;
        *b++;
    }
    *a = '\0';
}
int main()
{
    char a[100];
    char b[100];
    printf("Enter First String : \n");
    scanf("%[^'\n']s",a);
    printf("\nEnter Second String : \n");
    scanf(" %[^'\n']s",b);
    conca(a,b);
    printf("\nAfter Concating : %s ",a);
}
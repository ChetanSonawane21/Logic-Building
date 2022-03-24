//Copy String to Empty String Upto Given Number


#include <stdio.h>
#include <string.h>

int strcpn(char a[], char b[], int n) {
    if(a ==NULL||n<0)
    {
        return 0;
    }
    while(n>0 && *a!='\0')
    {
        *b=*a;
        *a++;
        n--;
        *b++;
    }
    *b='\0';
}
int main()
{
    char a[100];
    char b[100];
    char c[100];

    int n;
    printf("Enter String : ");
    scanf("%[^'\n']s", a);
    printf("\nEnter Character upto copy : ");
    scanf("%d", &n);
    strcpn(a, b, n);
    printf("\nCopied String : %s",b);
}
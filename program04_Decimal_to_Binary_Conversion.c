//Decimal to Binary Conversion

#include<stdio.h>

void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigit = 0;
    int arr[10];
    int i=0;
    while(iNo > 0)
    {
        iDigit = iNo % 2; // for octal use %8 adn /8,for hexadecimal use %16 and /16
        arr[i]=iDigit;
        i++;
        iNo = iNo / 2;
    }
    printf("\n");
    for(i=3;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
/*
    In case of Unsigned int  all 32 Bits are Usable while
    In case of Signed int only 31 Bits are Usable
    
    & one Bit used to give sign to number       POSITIVE = 0    NEGATIVE = 1
*/
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    DisplayBinary(iValue);
    
    return 0;
}
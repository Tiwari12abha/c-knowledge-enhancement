//Write a program to input a decimal number & print into decimal,octal & hexa decimal
#include<stdio.h>
int main(){
    int a;
    printf("Enter the decimal number:");
    scanf("%d",&a);
    printf("Decimal number:%d\nOctal number:%o\nHexa decimal number:%x\n",a,a,a);
    return 0;
}
/*OUTPUT
Enter the decimal number:500
Decimal number:500
Octal number:764
Hexa decimal number:1f4*/
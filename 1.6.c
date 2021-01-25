//Write a program to input hexa decimal number & print into decimal,octal,hexa decimal
#include<stdio.h>
int main(){
    int a;
    printf("Enter the Hexa decimal number:");
    scanf("%x",&a);
    printf("Decimal number:%d\nOctal number:%o\nHexa decimal number:%x\n",a,a,a);
    return 0;
}
/*OUTPUT
Enter the hexa decimal number:1f
Decimal number:31
Octal number:37
Hexa decimal number:1f
*/
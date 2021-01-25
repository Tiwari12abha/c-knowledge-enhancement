//Write a program to input an octal number & print into decimal,octal,hexadecimal
#include<stdio.h>
int main(){
    int a;
    printf("Enter the octal number:");
    scanf("%o",&a);
    printf("Decimal number:%d\nOctal number:%o\nHexa decimal number:%x\n",a,a,a);
    return 0;
}
/*OUTPUT
Enter the octal number:37 
Decimal number:31
Octal number:37
Hexa decimal number:1f
Enter the octal number:540
Decimal number:352
Octal number:540
Hexa decimal number:160*/
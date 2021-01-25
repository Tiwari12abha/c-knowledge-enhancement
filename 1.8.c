//8. Write a program to input a number and print corresponding character
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Corresponding character of %d is '%c'\n",a,a);
    return 0;
}
/*OUTPUT
Enter a number:66
Corresponding character of 66 is B
*/
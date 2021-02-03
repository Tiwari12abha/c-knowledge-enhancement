//Write a programm to input a number & check it to be even or odd using bitwise operator.
#include<stdio.h>
int main(){
    int  num;
    printf("Enter the number:");scanf("%d",&num);
    if(1 & num) printf("Odd");
    else printf("Even");
    return 0;
}
/*OUTPUT
Enter the number:2345678
Even
Enter the number:23456789
Odd*/
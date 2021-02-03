//Write a program to input a number and check it to be even or odd using if statement
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");scanf("%d",&num);
    if(num%2) printf("Odd");
    else printf("Even");
    return 0;
}
/*OUTPUT
Enter a number:4
Even
Enter a number:7
Odd*/
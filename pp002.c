//Write a program to input a number & check it to be even or odd using switch statement.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");scanf("%d",&num);
    switch(num%2){
        case 0 : printf("Even");break;
        default : printf("Odd");
    }
    return 0;
}
/*OUTPUT
Enter a number:12345678
Even
Enter a number:1234567
Odd*/
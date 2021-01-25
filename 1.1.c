/*Write a program to input a floating number & show that number with two 
decimal point*/
#include<stdio.h>
 void print(float a){
     printf("Number is %.2f\n",a);
 }
 int main(){
     float a;
     printf("Enter the floating num:"); scanf("%f",&a);print(a);
     return 0;
 }
 /*OUTPUT
 Enter the floating num:1.467
Number is 1.47
Enter the floating num:1.2345
Number is 1.23*/
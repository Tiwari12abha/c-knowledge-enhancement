//Write a program to input a floating number & show without decimal point
#include<stdio.h>
 void print(float a){
     printf("Without decimal number is %.0f\n",a);
 }
 int main(){
     float a;
     printf("Enter the floating num:"); scanf("%f",&a);print(a);
     return 0;
 }
 /*OUTPUT
 Enter the floating num:12.456
Without decimal number is 12
Enter the floating num:5.56
Without decimal number is 6*/
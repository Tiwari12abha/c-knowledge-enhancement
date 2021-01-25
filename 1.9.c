// Write a program to input a date in dd-mm-yyyy format and print date as dd/mm/yyyy format
#include<stdio.h>
 void ddmmyyyy(int d,int m,int y){
     printf("Date is %d/%d/%d",d,m,y);
 }
 int main(){
     int d,m,y;
     printf("Enter date in format dd-mm-yyyy:");
     scanf("%2d-%2d-%4d",&d,&m,&y);ddmmyyyy(d,m,y);
     return 0;
 }
 /*OUTPUT
 Enter date in format dd-mm-yyyy:17-12-1999
Date is 17/12/1999
Enter date in format dd-mm-yyyy:23-01-2021                    
Date is 23/1/2021*/

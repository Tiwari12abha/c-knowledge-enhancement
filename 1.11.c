//1.11. Write a program to input date in ddmmyyyy format and print as dd-mmm-yyyy format
#include<stdio.h>
 void ddmmyyyy(int d,int m,int y){
     printf("Date is %d-%d-%d",d,m,y);
 }
 int main(){
     int d,m,y;
     printf("Enter date in format ddmmyyyy:");
     scanf("%2d%2d%4d",&d,&m,&y);ddmmyyyy(d,m,y);
     return 0;
 }
 /*OUTPUT
 Enter date in format ddmmyyyy:15122020
Date is 15-12-2020
Enter date in format ddmmyyyy:23012021             
Date is 23-1-2021*/

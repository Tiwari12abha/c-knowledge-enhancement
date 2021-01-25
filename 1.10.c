//Write a program to input date in ddmmyyyy format and print as dd/mm/yyyy format
#include<stdio.h>
 void ddmmyyyy(int d,int m,int y){
     printf("Date is %d/%d/%d",d,m,y);
 }
 int main(){
     int d,m,y;
     printf("Enter date in format ddmmyyyy:");
     scanf("%2d%2d%4d",&d,&m,&y);ddmmyyyy(d,m,y);
     return 0;
 }
 /*OUTPUT
 Enter date in format ddmmyyyy:03081998
Date is 3/8/1998
Enter date in format ddmmyyyy:18081998
Date is 18/8/1998*/
/*Write a program to create an array of 10 integers,input the data & show all 
even numbers in given numbers.*/
#include<stdio.h>
int main(){
    int a[10],i;
    printf("Enter 10 integers:");
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++){
        if(a[i]%2==0){
            printf("%d,",a[i]);
        }
    }
    return 0;
}
/*OUTPUT
Enter 10 integers:1 34 6 77 9 23 93 47 49 55
34,6,
Enter 10 integers:6 7 8 9 23 67 9 12 45 7 10 
6,8,12,*/
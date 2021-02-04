/*Write a program to inpute a numbers from user till 0 is pressed & 
check every given number to be odd or even.*/
#include<stdio.h>
int main(){
    int num;
    for(;;){ 
        printf("Enter a number:");
        scanf("%d",&num);
        if(num){
            num%2?printf("%d is odd\n",num):printf("%d is even\n",num);
        }
        else break;
    }    
    return 0;
}
/*OUTPUT
Enter a number:99
99 is odd
Enter a number:86
86 is even
Enter a number:2
2 is even
Enter a number:0*/
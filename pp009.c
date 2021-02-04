/*Write a program having a function iseven() which take a number as input & returns 1 
if the number is even else return 0.create the main() function to input a number and
check it to be even or odd usingn iseven() fuction.*/
#include<stdio.h>
int iseven(int num){
    if(num%2) return 0;
    else return 1;
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",iseven(a));
    return 0;
}
/*OUTPUT
Enter a number:79
0
Enter a number:22
1
*/


//Write a program to input a character and its ASCII value
#include<stdio.h>
int main(){
    char c;
    printf("Enter the character:");
    c=getchar();
    printf("ASCII value of '%c' is %d",c,c);
    return 0;
}
/*OUTPUT
Enter the character:A
ASCII value of 'A' is 65
*/
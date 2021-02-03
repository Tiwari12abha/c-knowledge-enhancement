/*Write a program to input a number & check it to be even or odd without 
using any arithmetic ,relation,logical or bitwise operator*/
#include<stdio.h>
struct test{
    unsigned n:1;
};
int main(){
    int num;
    struct test t;
    printf("Enter a number:");scanf("%d",&num);
    t.n=num;
    if(t.n) printf("Odd");
    else printf("Even");
    return 0;
}
/*OUTPUT
Enter a number:5
Odd
Enter a number:8
Even*/
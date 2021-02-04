/*Create a header file as pp010.h having a function iseven() which takes a number as input 
& return 1 if the number is even else return 0. write a program pp010.c,include  the
hearder file into it.Create the main() function to input a number & check it to be even or 
odd using iseven() function.*/
#include"stdio.h"
#include"pp010.h"
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",iseven(a));
}
/*OUTPUT
Enter a number:77
0
Enter a number:80
1*/
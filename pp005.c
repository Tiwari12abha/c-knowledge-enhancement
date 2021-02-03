//Write a program to input two numbers & print all even number in given range.
#include<stdio.h>
int main(){
    int  n1,n2,i;
    printf("Enter the two number:");scanf("%d %d",&n1,&n2);
    if (n1>=n2){
        for (i=n2;i<=n1;i++){
            if(i%2==0){
                printf("%d,",i);
                i++;
            }
        }
    }
    else {
        for (i=n1;i<=n2;i++){
            if(i%2==0){
                printf("%d,",i);
                i++;
            }   
        }
    }
    return 0;
}
/* OUTPUT
Enter the two number:30 10
10,12,14,16,18,20,22,24,26,28,30,
Enter the two number:1 10
2,4,6,8,10,
Enter the two number:10 10
10,*/

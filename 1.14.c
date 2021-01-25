// Write a program to input name of a person and print first four character only
 #include<stdio.h>
 #include<string.h>
 int main(){
     char name[100];
     printf("Enter your name:");
     scanf("%s",&name);
     printf("First four character is %4.4s ",name);
     return 0;
}
/*OUTPUT
 Enter your name:ashutosh
First four character is ashu 
 Enter your name:anandtiwari
First four character is anan*/
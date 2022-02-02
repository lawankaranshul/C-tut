/******************************************************************************
Anshul Lawankar
Operators
02 Feb 2022

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int a,b;
    printf("Enter a integer a:");
    scanf("%d",&a);
    printf("Enter a integer b:");
    scanf("%d",&b);
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("Remainder when a divided b=%d\n",a%b);
    printf("OR\n");
    printf("%d=%dx%d+%d",a,a/b,b,a%b);
    
    return 0;
}
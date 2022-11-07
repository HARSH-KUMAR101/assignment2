#include<stdio.h>
#include<conio.h>
int main(){
  int a,b;
  printf("enter a num :");
   scanf("%d",&a);
    printf("enter a digit :");
    scanf("%d",&b);
    a = a*10;
    a = a+b;
    printf("%d",a);
    return 0;
    }

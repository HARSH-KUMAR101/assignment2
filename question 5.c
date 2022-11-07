#include<stdio.h>
#include<conio.h>
int main(){
  int a,b;
 printf("enter three digit num");
 scanf("%d",&a);
    b=a%10;
    a=a/10;
    b=b+a%10;
    a=a/10;
 printf("sum of the digits is %d",a+b);
 return 0;
}


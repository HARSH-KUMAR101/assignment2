#include<stdio.h>
#include<conio.h>
int main(){
 int a,b;
 printf("enter two num ");
 scanf("%d \n%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("swapped value is %d and %d",a,b) ;
 return 0;
}

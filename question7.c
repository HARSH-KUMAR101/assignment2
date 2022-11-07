#include<stdio.h>
#include<conio.h>
int main(){
 int a;
 printf("enter a num : ");
 scanf("%d",&a);
   a%2==0 && printf("%d is even num\n",a);
   a%2==1 && printf("%d is odd num",a);
   return 0;
}

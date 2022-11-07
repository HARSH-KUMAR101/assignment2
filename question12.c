#include<stdio.h>
int main(){
  int a,b;
  printf("enter three digit num :");
  scanf("%d",&a);
  b=a%10;
  a=a/10;
  b=b*100+a;
  printf("%d",b);
  return 0;

}

#include<stdio.h>
#include<stdlib.h>
int main(){
float a,b,c;
 printf("a=");
 scanf("%f",&a);
 printf("b=");
 scanf("%f",&b);
  printf("a+b=%f\n",a+b);
  printf("a-b=%f\n",a-b);
  printf("a*b=%f\n",a*b);
  c =(a/b);
  if(b==0)
    printf("impssible");
    else
    printf("a/b=%f",c);

}

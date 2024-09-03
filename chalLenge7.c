#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a,b,c,M,N,l;
    N = 0.33;
 printf("a=");
 scanf("%f",&a);
 printf("b=");
 scanf("%f",&b);
 printf("C=");
 scanf("%f",&c);

 l = a * b * c ;


  M=pow(l,N);

  printf("oyenne géométrique =%f",M);

}

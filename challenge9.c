#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
float x1,x2,y1,y2,z1,z2,M;
 printf("x1=");
 scanf("%f",&x1);
 printf("x2=");
 scanf("%f",&x2);
 printf("y1=");
 scanf("%f",&y1);
 printf("y2=");
 scanf("%f",&y2);
 printf("z1=");
 scanf("%f",&z1);
 printf("z2=");
 scanf("%f",&z2);

  M=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
  printf(" la distance entre deux points=%f",M);

}

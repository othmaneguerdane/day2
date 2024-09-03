#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
char c;
printf("c=");
scanf("%c",&c);
switch(c){
case'a':printf("donc %c est voyelle",c);
   break;
   case'i':printf("donc %c est voyelle",c);
   break;
   case'o':printf("donc %c est voyelle",c);
   break;
   case'u':printf("donc %c est voyelle",c);
   break;
   default:printf("%c non voyelle",c);
   break;

}

 }

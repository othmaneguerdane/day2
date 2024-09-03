#include<stdio.h>
#include<stdlib.h>
int main(){
 float kmh,ms;
 printf(" la vitesse en kilomètres par heure (km/h):");
 scanf("%f",&kmh);
 ms = (kmh * 0.27778);
  printf(" (m/s)=%.2f",ms);
}
